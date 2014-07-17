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
	//setFormat(640, 320, "raw");
	imgRGB_ = Mat(320, 240, CV_8UC3, Scalar::all(0));
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
	activateLampPostMode();
	updatingImgRGB_ = true;
	imgRGB_ = Mat(height, width, CV_8UC3, (void*) data, step);
	updatingImgRGB_ = false;
	processImage();
}

Mat CameraROS::getImage()
{
	while (updatingImgRGB_) {}
	return imgRGB_;
}

void CameraROS::processImage()
{
	imshow("RGB Model", imgRGB_);
	Mat imgHSL;
	cvtColor(imgRGB_, imgHSL, CV_RGB2HLS);
	//imshow("HSL Model", imgHSL);
	Mat splittedImgHSL[3];
	split(imgHSL, splittedImgHSL);
	Mat imgH = splittedImgHSL[0];
	//imshow("Hue", imgH);
	Mat imgS = splittedImgHSL[1];
	//imshow("Saturation", imgS);
	Mat imgL = splittedImgHSL[2];
	//imshow("Lightness", imgL);
	
	Mat threshImgL;
	int threshVal = 200;
	int maxVal = 255;
	threshold(imgL, threshImgL, threshVal, maxVal, THRESH_BINARY);
	//imshow("Thresholded Lightness", threshImgL);
	
	/*const int maskSize = 7;
	int mask[maskSize][maskSize] = {{0, 0, 0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0, 0, 0}, 
					{1, 1, 1, 0, 1, 1, 1},
					{0, 0, 0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0, 0, 0}, 
					{0, 0, 0, 0, 0, 0, 0}};  
	Mat kernel = Mat(maskSize, maskSize, CV_8U, (void*) mask, maskSize);*/
	int dilationSize = 3;
	Mat element = getStructuringElement(MORPH_RECT, Size(2 * dilationSize + 1, 2 * dilationSize + 1), Point(dilationSize, dilationSize)); 
	/*std::sstream == "";
	for (t_size i = 0; i < element.rows; i++)
	{
		for (t_size j = 0; j < element.columns; j++)
			s << 
		s << std::endl;
	}	*/

	Mat dilatedImgL;
	dilate(threshImgL, dilatedImgL, element);
	//imshow("Dilated Lightness", dilatedImgL);
	
	Mat mask = dilatedImgL - threshImgL;
	//imshow("Mask", mask);
	mask /= 255;

	Mat imgH1, imgH2; 
	imgH.copyTo(imgH1);//, CV_8U);
	Scalar s1 = Scalar(233);
	imgH1 -= s1;
	imgH.copyTo(imgH2);//, CV_8U;
	Scalar s2 = Scalar(22);
	imgH2 += s2;
	Mat newImgH = imgH1 + imgH2;
	Mat finalImgH = newImgH.mul(mask) * 2.5; 
	imshow("Final Filter", finalImgH);

	Mat imgRed, imgRed1, imgRed2;
	int redThreshMinVal = 5;
	int redThreshMaxVal = 65;
	int redMaxVal = 1;
	threshold(finalImgH, imgRed1, redThreshMinVal, redMaxVal, THRESH_BINARY);
	threshold(finalImgH, imgRed2, redThreshMaxVal, redMaxVal, THRESH_BINARY_INV);
	imgRed = imgRed1.mul(imgRed2) * 255; 
	imshow("Red Range", imgRed);

	Mat imgYellow, imgYellow1, imgYellow2;
	int yellowThreshMinVal = 75;
	int yellowThreshMaxVal = 100;
	int yellowMaxVal = 1;
	threshold(finalImgH, imgYellow1, yellowThreshMinVal, yellowMaxVal, THRESH_BINARY);
	threshold(finalImgH, imgYellow2, yellowThreshMaxVal, yellowMaxVal, THRESH_BINARY_INV);
	imgYellow = imgYellow1.mul(imgYellow2) * 255;
	imshow("Yellow Range", imgYellow);
	
	Mat imgGreen, imgGreen1, imgGreen2;
	int greenThreshMinVal = 130;
	int greenThreshMaxVal = 200;
	int greenMaxVal = 1;
	threshold(finalImgH, imgGreen1, greenThreshMinVal, greenMaxVal, THRESH_BINARY);
	threshold(finalImgH, imgGreen2, greenThreshMaxVal, greenMaxVal, THRESH_BINARY_INV);
	imgGreen = imgGreen1.mul(imgGreen2) * 255;
	imshow("Green Range", imgGreen);

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
	setFocus(3000);
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
