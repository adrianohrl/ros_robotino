/*
 * RobotinoNode.h
 *
 *  Created on: 15/07/2014
 *      Author: adrianohrl@unifei.edu.br
 */

#ifndef RobotinoCameraNode_H
#define RobotinoCameraNode_H

#include "ComROS.h"
#include "CameraROS.h"
#include "robotino_vision/LampPostState.h"
#include "robotino_vision/PuckState.h"
#include "robotino_vision/CameraMode.h"

#include <ros/ros.h>

typedef enum {OFF, LAMP_POST_STATE, PUCK_STATE} Mode;

class RobotinoVision
{
public:
	RobotinoVision();
	~RobotinoVision();

	bool spin();
	Mode getMode();

private:
	ros::NodeHandle nh_;

	ros::Subscriber camera_mode_sub_;

	ros::Publisher lamp_post_state_pub_;
	ros::Publisher puck_state_pub_;

	std::string hostname_;
	int cameraNumber_;
	Mode mode_;

	ComROS com_;
	CameraROS camera_;

	void initModules();
	void cameraModeCallback(const robotino_vision::CameraModeConstPtr& msg);
};

#endif /* RobotinoCameraNode_H */
