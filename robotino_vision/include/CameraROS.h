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
using namespace cv;

class CameraROS : public rec::robotino::api2::Camera
{
public:
	CameraROS();
	~CameraROS();

	void setNumber(int number);
	void setTimeStamp(ros::Time stamp);
	void setEnableImageReceivedEvent(bool enable);

private:

	ros::Time stamp_;
	bool enableImageReceivedEvent_;
	Mat imgBGR_;

	void imageReceivedEvent(
			const unsigned char* data,
			unsigned int dataSize,
			unsigned int width,
			unsigned int height,
			unsigned int step );
};

#endif /* CAMERAROS_H_ */
