/*
 * CameraROS.cpp
 *
 *  Created on: 14/07/2014
 *      Author: adrianohrl@unifei.edu.br
 */

#include "CameraROS.h"


CameraROS::CameraROS()
	: enableImageReceivedEvent_(true),
	  isInOrdinaryMode_(false)
{	
	setFormat(640, 480, "raw");
	toggleMode();	
}

CameraROS::~CameraROS()
{	
	setAutoExposureEnabled(true);
	setExposure(500);
	setBGREnabled(true);
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
		imshow("Amostragem", imgBGR_);
		waitKey(80);		
		//setEnableImageReceivedEvent(true);
	}
}

void CameraROS::setEnableImageReceivedEvent(bool enable)
{	
	enableImageReceivedEvent_ = enable;
}

void CameraROS::toggleMode()
{
	if (isInOrdinaryMode_)
		activateLampPostMode();
	else
		activateOrdinaryMode();
	isInOrdinaryMode_ = !isInOrdinaryMode_;
	setBGREnabled(true);
}

void CameraROS::activateLampPostMode()
{
	setAutoExposureEnabled(false);
	setExposure(15);
}

void CameraROS::activateOrdinaryMode()
{
	setAutoExposureEnabled(true);
	setAutoWhiteBalanceEnabled(true);
	setAutoFocusEnabled(true);
}
