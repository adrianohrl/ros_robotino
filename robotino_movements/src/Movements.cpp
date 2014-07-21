#include "Movements.h"

Movements::Movements()
{
	cmd_vel_pub_= nh_.advertise<geometry_msgs::Twist>("cmd_vel", 1, true);
	odometry_sub_ = nh_.subscribe("odom", 1, &Movements::odomCallback, this);
	scan_sub_ = nh_.subscribe("scan", 10, &Movements::scanCallback, this);

	if( positivo )
		posX = 5.04;
	else
		posX = -5.04;
	posY = 0.20;
	phi = 0;
	prev_x_ = 0.0;
	prev_y_ = 0.0;
	prev_phi_ = 0.0;
	mini_x_ = 0.0;
	mini_y_ = 0.0;
	mini_phi_ = 0.0;
	velReductionFactor = 1.0;

	resetOdo_cl = nh_.serviceClient<robotino_msgs::ResetOdometry>("reset_odometry");
	srv.request.x = 0.0;
	srv.request.y = 0.0;
	srv.request.phi = 0.0;

	if (resetOdo_cl.call(srv))
	{
		ROS_INFO("Odometry Reset!");
	}
	else
	{
		ROS_ERROR("Failed to generate path!");
	}
	sleep(1);
}

Movements::~Movements()
{
	cmd_vel_pub_.shutdown();
}

void Movements::spin()
{
	ros::Rate loop_rate(10);

	ROS_INFO("Robotino Movements Node is up and running");
	while (nh_.ok())
	{
		publishCmdVel();
		ros::spinOnce();
		loop_rate.sleep();
	}
}

void Movements::publishCmdVel() // TEM QUE SER CHAMADA O TEMPO TODO! SE NAO O ROBO NAO ANDA!
{
	cmd_vel_pub_.publish(cmd_vel_msg_);
}

void Movements::setCmdVel(double vel_x, double vel_y, double vel_phi)
{
	cmd_vel_msg_.linear.x = vel_x * velReductionFactor;
	cmd_vel_msg_.linear.y = vel_y;
	cmd_vel_msg_.angular.z = vel_phi;
}

void Movements::scanCallback(const sensor_msgs::LaserScan& msg)
{
	for( int i = 0; i < 9; i++ )
		distanceSensors[i+1] = msg.ranges[i];

	if(msg.ranges[0] < 0.59 || msg.ranges[1] < 0.59 || msg.ranges[8] < 0.59)
	{
		velReductionFactor = 0.0;
	}
	else
	{
		velReductionFactor = 1.0;
	}
}

void Movements::odomCallback(const nav_msgs::OdometryConstPtr& msg)
{
	odomX = msg->pose.pose.position.x;
	odomY = msg->pose.pose.position.y;
	odomPhi = tf::getYaw(msg->pose.pose.orientation);

	while (odomPhi - prev_phi_ < PI)
	{
		odomPhi += 2 * PI;
	}

	while (odomPhi - prev_phi_ > PI)
	{
		odomPhi -= 2 * PI;
	}

	mini_phi_ = odomPhi - prev_phi_;
	mini_x_  = odomX - prev_x_;
	mini_y_  = odomY - prev_y_;

	prev_phi_ = odomPhi;
	prev_x_ = odomX;
	prev_y_ = odomY;

	odomPhi = (odomPhi * 180)/PI;

	posX += -mini_y_;
	posY += mini_x_;

	mini_phi_ = mini_phi_ * 180 / PI;
	phi += mini_phi_;

	printf("X: %f	Y: %f	Phi: %f\n", posX, posY, phi);
}
