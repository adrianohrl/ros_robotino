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
	 // counter(0),
	  updatingImgRGB_(false)
{	
	setFormat(480, 640, "raw");
	activateLampPostMode();	
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
	/*if (counter > 100)
	{
		counter = 0;
		toggleMode();
	}
	if (enableImageReceivedEvent_)
	{
		ROS_INFO("Image Format: (height: %d, width: %d)", height, width);
		if (isInOrdinaryMode_)
		{
			ROS_INFO("Running Mode: Ordinary Mode");
			activateOrdinaryMode();
		}
		else
		{
			activateLampPostMode();
			ROS_INFO("Running Mode: Lamp Post Mode");
		}
		imgBGR_ = Mat(height, width, CV_8UC3, (void*) data, step); 
		imshow("Amostragem", imgBGR_);
		waitKey(80);		
	}
	counter++;*/
	updatingImgRGB_ = true;
	imgRGB_ = Mat(height, width, CV_8UC3, (void*) data, step);
	updatingImgRGB_ = false;
	processImage();
}

Mat CameraROS::getImage()
{
	return imgRGB_;
}

bool CameraROS::isUpdatingImage()
{
	return updatingImgRGB_;
}

void CameraROS::processImage()
{
	//imshow("RGB Model", imgRGB_);
	Mat imgHSL;
	cvtColor(imgRGB_, imgHSL, CV_RGB2HLS);
	//imshow("HSL Model", imgHSL);
	Mat splittedImgHSL[3];
	split(imgHSL, splittedImgHSL);
	Mat imgH = splittedImgHSL[0];
	imshow("Hue", imgH);
	Mat imgS = splittedImgHSL[1];
	imshow("Saturation", imgS);
	Mat imgL = splittedImgHSL[2];
	imshow("Lightness", imgL);
	int threshVal = 127;
	int threshMaxVal = 255;
	Mat threshImgL;
	threshold(imgL, threshImgL, threshVal, threshMaxVal, THRESH_BINARY);
	imshow("Thresholded Lightness", threshImgL); 
	waitKey(80);
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
	//setBGREnabled(true);
}

void CameraROS::activateLampPostMode()
{	
	isInOrdinaryMode_ = false;
	setAutoFocusEnabled(false);
	setFocus(2000);
	//setAutoExposureEnabled(false);
	//setExposure(50);
	//setGain(5);
}

void CameraROS::activateOrdinaryMode()
{
	isInOrdinaryMode_ = true;
	setAutoFocusEnabled(true);
	setAutoExposureEnabled(true);
	setAutoWhiteBalanceEnabled(true);
	/*const char* usbPortPath = "/dev/bus/usb/001/019";
	if (resetCameraUSBPort(usbPortPath))
		ROS_INFO("The %s has not been resetted successfully!!!", usbPortPath);
	else
		ROS_INFO("The %s has been resetted successfully!!!", usbPortPath);*/
}

/*bool CameraROS::resetCameraUSBPort(const char* usbPortPath)
{
	bool succeed = false;
	int fd, rc;
	fd = open(usbPortPath, O_WRONLY);	
	rc = ioctl(fd, USBDEVFS_RESET, 0);
	close(fd);
	if (rc >= 0)
		succeed = true;
	return succeed;
}*/
