/*
 * CameraROS.cpp
 *
 *  Created on: 14/07/2014
 *      Author: adrianohrl@unifei.edu.br
 */

#include "CameraROS.h"

CameraROS::CameraROS()
	: enableImageReceivedEvent_(true),
	  isInOrdinaryMode_(false),
	  counter(0)
{	
	setFormat(480, 640, "raw");
	toggleMode();	
}

CameraROS::~CameraROS()
{	
	isInOrdinaryMode_ = false;
	toggleMode();
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
	if (counter > 20)
	{
		counter = 0;
		toggleMode();
	}
	if (enableImageReceivedEvent_)
	{
		ROS_INFO("Image Format: (height: %d, width: %d)", height, width);
		if (isInOrdinaryMode_)
			ROS_INFO("Running Mode: Ordinary Mode");
		else
			ROS_INFO("Running Mode: Lamp Post Mode");
		imgBGR_ = Mat(height, width, CV_8UC3, (void*) data, step); 
		imshow("Amostragem", imgBGR_);
		waitKey(80);		
	}
	counter++;
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
	setExposure(50);
}

void CameraROS::activateOrdinaryMode()
{
	setAutoExposureEnabled(true);
	setAutoWhiteBalanceEnabled(true);
	setAutoFocusEnabled(true);
	const char usb_port = "/dev/bus/usb/001/019";
	int fd, rc;
	fd = open(usb_port, O_WRONLY);	
	rc = ioctl(fd, USBDEVFS_RESET, 0);
	if (rc < 0)
	{
		perror("Deu erro ao resetar a porta usb");
		return;
	}
	ROS_INFO("Porta USB resetada!!!");
	close(fd);
}
