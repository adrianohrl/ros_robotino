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
	if (counter > 100)
	{
		counter = 0;
		toggleMode();
	}
	if (enableImageReceivedEvent_)
	{
		ROS_DEBUG("Image Format: (height: %d, width: %d)", height, width);
		if (isInOrdinaryMode_)
			ROS_DEBUG("Running Mode: Ordinary Mode");
		else
		{
			activateLampPostMode();
			ROS_DEBUG("Running Mode: Lamp Post Mode");
		}
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
	setFocus(0);
	/*setAutoExposureEnabled(false);
	setExposure(50);
	setGain(5);*/
}

void CameraROS::activateOrdinaryMode()
{
	setAutoFocusEnabled(true);
	/*setAutoExposureEnabled(true);
	setAutoWhiteBalanceEnabled(true);
	const char* usbPortPath = "/dev/bus/usb/001/019";
	if (resetCameraUSBPort(usbPortPath))
		ROS_INFO("The %s has not been resetted successfully!!!", usbPortPath);
	else
		ROS_INFO("The %s has been resetted successfully!!!", usbPortPath);*/
}

bool CameraROS::resetCameraUSBPort(const char* usbPortPath)
{
	bool succeed = false;
	int fd, rc;
	fd = open(usbPortPath, O_WRONLY);	
	rc = ioctl(fd, USBDEVFS_RESET, 0);
	close(fd);
	if (rc >= 0)
		succeed = true;
	return succeed;
}
