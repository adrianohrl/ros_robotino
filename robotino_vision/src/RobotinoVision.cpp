/*
 * RobotinoNode.cpp
 *
 *  Created on: 15/07/2014
 *      Author: adrianohrl@unifei.edu.br
 */

#include "RobotinoVision.h"
#include <sstream>

RobotinoVision::RobotinoVision()
	: nh_("~"),
	mode_(OFF)
{
	nh_.param<std::string>("hostname", hostname_, "0.0.0.0:12080");
	nh_.param<int>("cameraNumber", cameraNumber_, 0);

	camera_mode_sub_ = nh_.subscribe("/camera/mode", 1, &RobotinoCameraNode::cameraModeCallback, this);
	lamp_post_state_pub_ = nh_.advertise<robotino_vision::LampPostState>("/lamp_post/state", 10);
	puck_state_pub_ = nh_.advertise<robotino_vision::PuckState>("/puck/state", 10);

	std::ostringstream os;
	os << "Camera" << cameraNumber_;
	com_.setName(os.str());

	initModules();
}

RobotinoVision::~RobotinoVision()
{
	camera_mode_sub_.shutdown();
	lamp_post_pub_.shutdown();
	puck_state_.shutdown();
}

void RobotinoVision::initModules()
{
	com_.setAddress(hostname_.c_str());
	camera_.setComId(com_.id());
	camera_.setNumber(cameraNumber_);
	com_.connectToServer(false);
}

bool RobotinoVision::spin()
{
	ros::Rate loop_rate(30);
	while(nh_.ok())
	{
		ros::Time curr_time = ros::Time::now();
		camera_.setTimeStamp(curr_time);
		com_.processEvents();
		ros::spinOnce();
		loop_rate.sleep();
	}
	return true;
}

void RobotinoVision::cameraModeCallback(const robotino_vision::CameraModeConstPtr& msg)
{
	switch (msg->mode)
	{
		case 1:
			mode_ = LAMP_POST;
			camera_.activateLampPostMode();
		break;
		case 2:
			mode_ = PUCK;
			camera_.activateOrdinaryMode();
		break;
		default:
			mode_ = OFF;
			camera_.activateOrdinaryMode();
	}
}

Mat getImage()
{
	return camera_.getImage();
}

Mode getMode()
{
	return mode_;
}
