/*
 * robotino_local_move_server_node.cpp
 *
 *  Created on: 14.12.2011
 *      Author: indorewala@servicerobotics.eu
 */

#include "RobotinoLocalMoveServer.h"
#include "RobotinoLocalMoveClient.h"
#include "robotino_local_move/PathPosition.h"
#include "robotino_local_move/PathStatus.h"
#include "robotino_local_move/Stop.h"

#define PI 3.14159
#define MAX_TIME 60

bool stopCallback(robotino_local_move::Stop::Request &req,
         robotino_local_move::Stop::Response &res)
{
	RobotinoLocalMoveClient rlmc;
	rlmc.cancelGoal();
	robotino_local_move::PathStatus status_msg;
	status_msg.status = 0;
	status_pub.publish(status_msg);
	return true;
}

void statusCallback(int status)
{
	robotino_local_move::PathStatus status_msg;
	status_msg.status = status;
	status_pub.publish(status_msg);
}

void pathCallback(const robotino_local_move::PathPosition::ConstPtr& msg)
{	
	RobotinoLocalMoveClient rlmc;
	robotino_local_move::LocalMoveGoal goal;
	goal.move_x = msg->move_x;
	goal.move_y = msg->move_y;
	goal.rotation = (msg->rotation * PI) / 180; // To radians
	rlmc.setMaxTime(MAX_TIME);

	ROS_INFO("Sending goal (move_x[m], move_y[m], rotate[deg])=(%f, %f, %f)",
			goal.move_x, goal.move_y, goal.rotation);

	if (rlmc.checkServer())
	{
		rlmc.sendGoal(goal);
		rlmc.spin(statusCallback);
	}
}

int main(int argc, char** argv)
{
	ros::init(argc, argv, "robotino_local_move_server_node");
	ros::NodeHandle n;
	ros::Subscriber path_sub = n.subscribe("path", 1000, pathCallback);
	ros::Publisher status_pub = n.advertise<robotino_local_move::PathStatus>("path/status", 1000);
	ros::ServiceServer stop_srv = n.advertiseService("stop", stopCallback);
	RobotinoLocalMoveServer rlms;
	rlms.spin();

	return 0;
}
