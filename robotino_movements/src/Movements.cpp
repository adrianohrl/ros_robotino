#include "Movements.h"

Movements::Movements()
{
	cmd_vel_pub_= nh_.advertise<geometry_msgs::Twist>("cmd_vel", 1, true);
	odometry_sub_ = nh_.subscribe("odom", 1, &Movements::odomCallback, this);
	scan_sub_ = nh_.subscribe("scan", 10, &Movements::scanCallback, this);
	robot_pub_= nh_.advertise<robotino_movements::RobotPos>("robot_pos", 1, true);
	prova = nh_.advertiseService("Prova", &Movements::prova_Callback, this);

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
	odomPhiG = 0.0;

	resetOdo_cl = nh_.serviceClient<robotino_msgs::ResetOdometry>("reset_odometry");
	srv.request.x = 0.0;
	srv.request.y = 0.0;
	srv.request.phi = 0.0;

	finish = true;

	if (resetOdo_cl.call(srv))
	{
		ROS_INFO("Odometry Reset!");
	}
	else
	{
		ROS_ERROR("Failde to reset Odometry!");
	}
	sleep(1);
}

Movements::~Movements()
{
	cmd_vel_pub_.shutdown();
	odometry_sub_.shutdown();
	scan_sub_.shutdown();
	robot_pub_.shutdown();
	prova.shutdown();
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
	cmd_vel_msg_.linear.x = vel_x; //* velReductionFactor;
	cmd_vel_msg_.linear.y = vel_y;
	cmd_vel_msg_.angular.z = vel_phi;
	publishCmdVel();
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

	if(!finish)
	{
		setCmdVel(0.0, 0.0, velAng * PI/180);

		//ros::Timer timer = nh_.createTimer(ros::Duration(3), &Movements::timerCallback, this, true);

		if( abs( (abs(rotAngle) - abs(odomPhiG)) ) < 10.0 )
		{
			ROS_INFO("Menos do que 10 graus!");
			velAng = (rotAngle - odomPhiG) * ( 50/10 );
			setCmdVel(0.0, 0.0, velAng * PI/180);
		}
		if( abs( (abs(rotAngle) - abs(odomPhiG)) ) < 1.0 )
		{
			setCmdVel(0.0, 0.0, 0.0);
			sleep(1);
			finish = true;
		}
	}
}

void Movements::odomCallback(const nav_msgs::OdometryConstPtr& msg)
{
	odomX = msg->pose.pose.position.x;
	odomY = msg->pose.pose.position.y;
	odomPhi = tf::getYaw(msg->pose.pose.orientation);

	if( odomX == 0.0 && odomY == 0.0 && odomPhi == 0.0 )
	{
		prev_phi_ = 0.0;
		prev_x_ = 0.0;
		prev_y_ = 0.0;
	}

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
	odomPhiG = odomPhi;

	posX += -mini_y_;
	posY += mini_x_;

	mini_phi_ = mini_phi_ * 180 / PI;
	phi += mini_phi_;

	robot_pos_msg_.posX = posX;
	robot_pos_msg_.posY = posY;
	robot_pos_msg_.phi = phi;
	robot_pub_.publish(robot_pos_msg_);
}

void Movements::foward(double velx, double distx)
{
	resetOdom();
	
	sleep(1);

	int kp = 4;
	double last_phi = 0;
	
	while(odomX < distx)
	{
		last_phi = (-1 * odomPhiG * kp) * PI / 180;
		setCmdVel(velx, 0.0, last_phi);		
	}
	setCmdVel(0.0, 0.0, 0.0);
}

void Movements::timerCallback(const ros::TimerEvent&)
{
	printf("timerCallback\n");
	finish = true;
}

void Movements::rotate(double angle_f)
{
	resetOdom();
	
	rotAngle = angle_f;

	velAng = 50.0;
	
	if(rotAngle < 0)
		velAng = - velAng;

	setCmdVel(0.0, 0.0, velAng * PI/180);

	finish = false;
}

bool Movements::prova_Callback(robotino_movements::Prova::Request &req, robotino_movements::Prova::Response &res)
{
	printf("Iniciando a Prova!\n");
	rotate(90);
	res.isDone = true;
}

void Movements::resetOdom()
{
	if (resetOdo_cl.call(srv))
	{
		ROS_INFO("Odometry Reset!");
	}
	else
	{
		ROS_ERROR("Failde to reset Odometry!");
	}
	//while( enquanto nao zerar a odometria
}




