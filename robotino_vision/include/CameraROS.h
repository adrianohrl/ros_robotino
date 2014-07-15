/*
 * CameraROS.h
 *
 *  Created on: 08.12.2011
 *      Author: indorewala@servicerobotics.eu
 */

#ifndef CAMERAROS_H_
#define CAMERAROS_H_

#include <ros/ros.h>
#include "rec/robotino/api2/Camera.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <linux/usbdevice_fl.h>
using namespace cv;

class CameraROS : public rec::robotino::api2::Camera
{
public:
	CameraROS();
	~CameraROS();

	void setNumber(int number);
	void setTimeStamp(ros::Time stamp);
	void setEnableImageReceivedEvent(bool enable);
	void toggleMode();

private:

	ros::Time stamp_;
	bool enableImageReceivedEvent_;
	bool isInOrdinaryMode_;
	Mat imgBGR_;
	unsigned int counter;

	void imageReceivedEvent(
			const unsigned char* data,
			unsigned int dataSize,
			unsigned int width,
			unsigned int height,
			unsigned int step );		
	void activateOrdinaryMode();
	void activateLampPostMode();
};

#endif /* CAMERAROS_H_ */
