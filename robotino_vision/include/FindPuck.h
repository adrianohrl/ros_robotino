/*
 * RobotinoNode.h
 *
 *  Created on: 09.12.2011
 *      Author: indorewala@servicerobotics.eu
 */

#ifndef FindPuck_H
#define FindPuck_H

#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "std_msgs/Int32MultiArray.h"
#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"

#include <ros/ros.h>	

using namespace cv;

class FindPuck
{
public:
	FindPuck();
	~FindPuck();

	void publish_obj_pos(Mat imgRGB);
	void calibrate(Mat imgRGB);
	void tresCores(Mat imgRGB);

private:

	ros::NodeHandle nh_;
	ros::Publisher pos_pub_;

	int posX;
	int posY;
	Mat src_gray;

	int iLowH;
	int iHighH;

	int iLowS;
	int iHighS;

	int iLowV;
	int iHighV;

	IplImage* GetThresholdedImage(IplImage* imgHSV);
	std_msgs::Int32MultiArray get_mass_centers();
	std_msgs::Int32MultiArray find_pucks(Mat imgRGB);
};

#endif /* FindPuck_H */
