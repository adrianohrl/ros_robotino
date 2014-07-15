/*
 * CameraROS.cpp
 *
 *  Created on: 14/07/2014
 *      Author: adrianohrl@unifei.edu.br
 */

#include "CameraROS.h"


CameraROS::CameraROS()
	: enableImageReceivedEvent_(true)
{
	setBGREnabled(true);
}

CameraROS::~CameraROS()
{
}

void CameraROS::setNumber(int number)
{
	setCameraNumber(number);
}

void CameraROS::setTimeStamp(ros::Time stamp)
{
	stamp_ = stamp;
}

void CameraROS::imageReceivedEvent(
		const unsigned char* data, 
		unsigned int dataSize,
		unsigned int width, 
		unsigned int height, 
		unsigned int step)
{
	if (enableImageReceivedEvent_)
	{
		imgBGR_ = Mat(height, width, CV_8UC3, (void*) data, step); 
		setEnableImageReceivedEvent(false);
		imshow("Amostragem", imgBGR_);
		waitKey(80);
	}
}

void CameraROS::setEnableImageReceivedEvent(bool enable)
{	
	enableImageReceivedEvent_ = enable;
}
