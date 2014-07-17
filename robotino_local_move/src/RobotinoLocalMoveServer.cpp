/*
 * RobotinoLocalMoveServer.cpp
 *
 *  Created on: 15/07/2014
 *      Author: adrianohrl@unifei.edu.br
 */

#include "RobotinoLocalMoveServer.h"

#include <tf/transform_datatypes.h>

RobotinoLocalMoveServer::RobotinoLocalMoveServer():
	nh_("~"),
	server_(nh_, "/local_move", boost::bind(&RobotinoLocalMoveServer::execute, this, _1), false),
	curr_x_(0.0),
	curr_y_(0.0),
	curr_phi_(0.0),
	prev_phi_(0.0),
	dist_moved_x_(0.0),
	dist_moved_y_(0.0),
	dist_rotated_(0.0),
	forward_goal_x_(0.0),
	forward_goal_y_(0.0),
	rotation_goal_(0.0),
	start_x_(0.0),
	start_y_(0.0),
	start_phi_(0.0),
	odom_set_(false)
{
	odometry_sub_ = nh_.subscribe("odom", 1, &RobotinoLocalMoveServer::odomCallback, this);
	cmd_vel_pub_ = nh_.advertise<geometry_msgs::Twist>("cmd_vel", 1);
	state_ = IDLE;
	readParameters(nh_);
}

RobotinoLocalMoveServer::~RobotinoLocalMoveServer()
{
	odometry_sub_.shutdown();
	cmd_vel_pub_.shutdown();
	server_.shutdown();
}

void RobotinoLocalMoveServer::odomCallback(const nav_msgs::OdometryConstPtr& msg)
{
	curr_x_ = msg->pose.pose.position.x;
	curr_y_ = msg->pose.pose.position.y;
	curr_phi_ = tf::getYaw(msg->pose.pose.orientation);

	if (odom_set_ == false)
	{
		ROS_INFO("Odometry initialized");

		odom_set_ = true;
		prev_phi_ = curr_phi_;

		server_.start();
	}

	while (curr_phi_ - prev_phi_ < PI)
	{
		curr_phi_ += 2 * PI;
	}

	while (curr_phi_ - prev_phi_ > PI)
	{
		curr_phi_ -= 2 * PI;
	}

	dist_rotated_ += curr_phi_ - prev_phi_;
	prev_phi_ = curr_phi_;
	dist_moved_x_ = curr_x_ - start_x_;
	dist_moved_y_ = curr_y_ - start_y_;

	double distance_moved_x_temp = dist_moved_x_;

	dist_moved_x_ = dist_moved_x_ * cos(-start_phi_) - dist_moved_y_ * sin(-start_phi_);
	dist_moved_y_ = dist_moved_y_ * cos(-start_phi_) + distance_moved_x_temp * sin(-start_phi_);
}

void RobotinoLocalMoveServer::execute(const robotino_local_move::LocalMoveGoalConstPtr& goal)
{
	ros::Rate loop_rate(20);

	if (!acceptNewGoal(goal))
	{
		ROS_WARN("Goal not accepted");
		return;
	}

	while (nh_.ok())
	{
		if (server_.isPreemptRequested())
		{
			if (server_.isNewGoalAvailable())
			{
				if (!acceptNewGoal(server_.acceptNewGoal()))
					return;
			}
			else
			{
				ROS_INFO("Cancel request");
				setCmdVel(0, 0, 0);
				cmd_vel_pub_.publish(cmd_vel_msg_);
				server_.setPreempted();
				state_ = IDLE;
				return;
			}
		}

		controlLoop();

		if (state_ == FINISHED)
		{
			setCmdVel(0, 0, 0);
			cmd_vel_pub_.publish(cmd_vel_msg_);

			result_.goal_reached = true;
			server_.setSucceeded(result_);
			state_ = IDLE;
			ROS_INFO("Local move execution complete: (x[m], y[m], phi[deg]): (%f, %f, %f)", dist_moved_x_, dist_moved_y_, (dist_rotated_ * 180) / PI);
			return;
		}

		if (state_ != IDLE)
		{
			cmd_vel_pub_.publish(cmd_vel_msg_);
			server_.publishFeedback(feedback_);
		}

		ros::spinOnce();
		loop_rate.sleep();
	}

	setCmdVel(0, 0, 0);
	cmd_vel_pub_.publish(cmd_vel_msg_);

	server_.setAborted(robotino_local_move::LocalMoveResult(), "Aborting on the goal because the node has been killed");
}

void RobotinoLocalMoveServer::setCmdVel(double vel_x, double vel_y, double vel_phi)
{
	cmd_vel_msg_.linear.x = vel_x;
	cmd_vel_msg_.linear.y = vel_y;
	cmd_vel_msg_.angular.z = vel_phi;
}

void RobotinoLocalMoveServer::spin()
{
	ros::Rate loop_rate(20);

	ROS_INFO("Robotino Local Move Server up and running");
	while (nh_.ok())
	{
		ros::spinOnce();
		loop_rate.sleep();
	}
}

void RobotinoLocalMoveServer::controlLoop()
{
	setCmdVel(0, 0, 0);
	
	double dist_driven_x = fabs(dist_moved_x_); // current linear displacement in x axis
	double dist_driven_y = fabs(dist_moved_y_); // current linear displacement in y axis
	double dist_rotated_abs = fabs(dist_rotated_); // current angular displacement in phi axis

	double forward_goal_x_abs = fabs(forward_goal_x_);
	double forward_goal_y_abs = fabs(forward_goal_y_);
	double rotation_goal_abs = fabs(rotation_goal_);

	double distance_to_go_x = forward_goal_x_abs - dist_driven_x;
	double distance_to_go_y = forward_goal_y_abs - dist_driven_y;
	double distance_to_go_phi = rotation_goal_abs - dist_rotated_abs;

	feedback_.forward_dist_x = distance_to_go_x;
	feedback_.forward_dist_y = distance_to_go_y;
	feedback_.rotation_dist = distance_to_go_phi;

	double dist_res = sqrt(pow(forward_goal_x_abs, 2) + pow(forward_goal_y_abs, 2)); // resultant linear displacement
	double ang_res = atan(forward_goal_y_abs / forward_goal_x_abs); // resultant direction

	double vel_x = 0.0; // linear velocity in x axis
	double vel_y = 0.0; // linear velocity in y axis
	double vel_phi = 0.0; // angular velocity in phi axis

	switch (state_)
	{
		case TRANSLATIONAL_MOVEMENT:
			if (dist_driven_x < forward_goal_x_abs || dist_driven_y < forward_goal_y_abs)
			{				
				ROS_DEBUG("Moved (x, y) = (%f, %f)", dist_driven_x, dist_driven_y);

				vel_x = VEL_LIN * cos(ang_res);	
				vel_y = VEL_LIN * sin(ang_res);
			}
		break;
		case ROTATIONAL_MOVEMENT:
			if (dist_rotated_abs < rotation_goal_abs)
			{
				ROS_DEBUG("Rotated %f degrees", (dist_rotated_ * 180) / PI);

				vel_phi = VEL_ANG;
			}
		break;
		case TRANSLATIONAL_ROTATIONAL_MOVEMENT:	
			if (dist_driven_x < forward_goal_x_abs || dist_driven_y < forward_goal_y_abs || dist_rotated_abs < rotation_goal_abs)
			{
				ROS_DEBUG("Moved (x, y) = (%f, %f) and rotated %f degrees", dist_driven_x, dist_driven_y, (dist_rotated_ * 180) / PI);

				vel_x = VEL_LIN * cos(dist_rotated_abs);
				vel_y = VEL_LIN * sin(dist_rotated_abs);
				vel_phi = rotation_goal_abs * VEL_LIN / dist_res;
			}	
		break;
		case TANGENT_MOVEMENT:
			if (dist_driven_x < forward_goal_x_abs || dist_driven_y < forward_goal_y_abs || dist_rotated_abs < rotation_goal_abs)
			{
				ROS_DEBUG("Moved (x, y) = (%f, %f) and rotated %f degrees", dist_driven_x, dist_driven_y, (dist_rotated_ * 180) / PI);
	
				double radius = .5 * sqrt(pow(forward_goal_x_abs, 2) + pow(forward_goal_y_abs, 2)) / sin(rotation_goal_abs / 2);

				vel_x = VEL_LIN;
				vel_y = 0.0;
				vel_phi = VEL_LIN / radius;
			}	
		break;
		default:
			setCmdVel(0, 0, 0);
			return;
	}

	if (forward_goal_x_ < 0.0)
		vel_x = -vel_x;
	if (forward_goal_y_ < 0.0)
		vel_y = -vel_y;
	if(rotation_goal_ < 0.0)
		vel_phi = -vel_phi;

	if (vel_x == 0.0 && vel_y == 0.0 && vel_phi == 0.0)
		state_ = FINISHED;
	else
		setCmdVel(vel_x, vel_y, vel_phi);
}

bool RobotinoLocalMoveServer::acceptNewGoal(const robotino_local_move::LocalMoveGoalConstPtr& goal)
{
	if(!odom_set_)
	{
		ROS_ERROR("Odometry not initialized");
		return false;
	}
	
	forward_goal_x_ = goal->move_x;
	forward_goal_y_ = goal->move_y;
	rotation_goal_ = goal->rotation;

	ROS_INFO("Local move execution start: (x[m], y[m], phi[deg]): (%f, %f, %f)", forward_goal_x_, forward_goal_y_, (rotation_goal_ * 180) / PI);

	start_x_ = curr_x_;
	start_y_ = curr_y_;
	start_phi_ = curr_phi_;

	dist_moved_x_ = 0.0;
	dist_moved_y_ = 0.0;
	dist_rotated_ = 0.0;

	switch (goal->movementType)
	{
		case 0:
			state_ = TRANSLATIONAL_MOVEMENT;
			break;
		case 1:
			state_ = ROTATIONAL_MOVEMENT;
			break;
		case 2:
			state_ = TRANSLATIONAL_ROTATIONAL_MOVEMENT;
			break;
		case 3:
			/*if (forward_goal_x_ != forward_goal_y_)
			{
				ROS_ERROR("The move_x and move_y parameters must be equal");
				return false;
			}*/
			state_ = TANGENT_MOVEMENT;
			break;
		default:
			ROS_ERROR("Incorrect movement type parameter");
			return false;
	}
	return true;
}

void RobotinoLocalMoveServer::readParameters( ros::NodeHandle& n)
{
	double min_forward_vel;
	n.param( "min_forward_vel", min_forward_vel, 0.05 );

	double max_forward_vel;
	n.param( "max_forward_vel", max_forward_vel, 0.1 );

	double min_forward_vel_distance;
	n.param( "min_forward_vel_distance", min_forward_vel_distance, 0.1 );

	double max_forward_vel_distance;
	n.param( "max_forward_vel_distance", max_forward_vel_distance, 0.5 );

	geometry_msgs::Point32 point;
	point.x = 0.0;
	point.y = min_forward_vel;
	forward_vel_vector_.push_back( point );

	point.x = min_forward_vel_distance;
	point.y = min_forward_vel;
	forward_vel_vector_.push_back( point );

	point.x = max_forward_vel_distance;
	point.y = max_forward_vel;
	forward_vel_vector_.push_back( point );

	double min_rotational_vel;
	n.param( "min_rotational_vel", min_rotational_vel, 0.04 );

	double max_rotational_vel;
	n.param( "max_rotational_vel", max_rotational_vel, 0.2 );

	double min_rotational_vel_distance;
	n.param( "min_rotational_vel_distance", min_rotational_vel_distance, 0.05 );

	double max_rotational_vel_distance;
	n.param( "max_rotational_vel_distance", max_rotational_vel_distance, 0.2 );

	point.x = 0.0;
	point.y = min_rotational_vel;
	rotation_vel_vector_.push_back( point );

	point.x = min_rotational_vel_distance;
	point.y = min_rotational_vel;
	rotation_vel_vector_.push_back( point );

	point.x = max_rotational_vel_distance;
	point.y = max_rotational_vel;
	rotation_vel_vector_.push_back( point );
}

template< typename InputIterator > double RobotinoLocalMoveServer::linearApproximator(
		InputIterator iter, InputIterator end, const double x )
{
	double y = 0.0;

	if( iter != end )
	{
		if( x < (*iter).x )
		{
			y = (*iter).y;
		}
		else
		{
			while( end != iter )
			{
				const geometry_msgs::Point32& p = (*iter);
				++iter;

				if( x >= p.x )
				{
					if( end != iter )
					{
						if( x < (*iter).x )
						{
							const geometry_msgs::Point32& p2 = (*iter);
							double dx = p2.x - p.x;
							double dy = p2.y - p.y;

							if( 0.0 == dx )
							{
								y = p.y;
							}
							else
							{
								double a = dy / dx;
								y = a * ( x - p.x ) + p.y;
							}
						}
					}
					else
					{
						y = p.y;
					}
				}
			}
		}
	}

	return y;
}
