#include "FindPuck.h"

FindPuck::FindPuck()
{
	pos_pub_= nh_.advertise<std_msgs::Int32MultiArray>("obj_pos", 2);

	/*iLowH = 0;
	iHighH = 179;

	iLowS = 0;
	iHighS = 255;

	iLowV = 0;
	iHighV = 255;

	namedWindow("Control", CV_WINDOW_AUTOSIZE); //create a window called "Control"

        //Create trackbars in "Control" window
        cvCreateTrackbar("LowH", "Control", &iLowH, 179); //Hue (0 - 179)
        cvCreateTrackbar("HighH", "Control", &iHighH, 179);

        cvCreateTrackbar("LowS", "Control", &iLowS, 255); //Saturation (0 - 255)
        cvCreateTrackbar("HighS", "Control", &iHighS, 255);

        cvCreateTrackbar("LowV", "Control", &iLowV, 255); //Value (0 - 255)
        cvCreateTrackbar("HighV", "Control", &iHighV, 255);*/
}

FindPuck::~FindPuck()
{
}

void FindPuck::publish_obj_pos(Mat imgRGB)
{
	pos_pub_.publish(find_pucks(imgRGB));
}

IplImage* FindPuck::GetThresholdedImage(IplImage* imgHSV)
{
	IplImage* imgThresh=cvCreateImage(cvGetSize(imgHSV),IPL_DEPTH_8U, 1);

	// below we select the HSV values.  Thes are the values for the ball I am using on my robotino's webcam
	cvInRangeS(imgHSV, cvScalar(67,80,32), cvScalar(91,174,99), imgThresh);
	return imgThresh;
}

std_msgs::Int32MultiArray FindPuck::get_mass_centers()
{
	vector<vector<Point> > contours;
	vector<Vec4i> hierarchy;

	/// Find contours
	findContours( src_gray, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0) );

	/// Get the moments
	vector<Moments> mu(contours.size() );
	for( int i = 0; i < contours.size(); i++ )
	{
		mu[i] = moments( contours[i], false );
	}

	///  Get the mass centers:
	vector<Point2f> mc( contours.size() );
	for( int i = 0; i < contours.size(); i++ )
	{
		mc[i] = Point2f( mu[i].m10/mu[i].m00 , mu[i].m01/mu[i].m00 );
	}

	/// Draw contours
	Mat drawing = Mat::zeros( src_gray.size(), CV_8UC3 );
	for( int i = 0; i< contours.size(); i++ )
	{
		Scalar color = Scalar( 255, 255, 255 );
		drawContours( drawing, contours, i, color, 2, 8, hierarchy, 0, Point() );
		circle( drawing, mc[i], 4, color, -1, 8, 0 );
	}

	/// Find the biggest region in the picture and stores its mass center
	int max = 0;
	for( int i = 0; i< contours.size(); i++ )
	{
		if( mu[i].m00 >= mu[max].m00 )
		{
			posX = mu[i].m10/mu[i].m00;
			posY = mu[i].m01/mu[i].m00;
			max = i;

			Scalar color = Scalar( 255, 0, 0 );
			drawContours( drawing, contours, i, color, 2, 8, hierarchy, 0, Point() );
			circle( drawing, mc[max], 4, color, -1, 8, 0 );
		}
		//printf(" * Contour[%d] - Area (M_00) = %.2f - Area OpenCV: %.2f - Length: %.2f \n", i, mu[i].m00, contourArea(contours[i]), arcLength( contours[i], true ) );
	}

	/// Show in a window
	//imshow( "Imagem Filtrada", drawing );

	//printf("Pos: %i, %i\n", posX, posY);

	// the code belosw is used to send a size 2 array to indicate the position
	// sent as rostopic /obj_pos
	std_msgs::Int32MultiArray array;
	array.data.clear();
	array.data.push_back(posX);
	array.data.push_back(posY);
	return array;
}

std_msgs::Int32MultiArray FindPuck::find_pucks(Mat imgRGB)
{
	Mat ori_img = imgRGB;

	IplImage* frame = new IplImage(ori_img);

	IplImage* imgHSV = cvCreateImage(cvGetSize(frame), IPL_DEPTH_8U, 3);
	cvCvtColor(frame, imgHSV, CV_BGR2HSV); //Change the color format from BGR to HSV

	// blur it
	blur( (Mat)GetThresholdedImage(imgHSV), src_gray, Size(3,3) );

	//Clean up used images
	//cvReleaseImage(&frame);

	//cvShowImage("Image", frame);
	//cv::waitKey(80);

	return get_mass_centers();
}

void FindPuck::calibrate(Mat imgRGB)
{
	Mat imgHSV;

	cvtColor(imgRGB, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

	Mat imgThresholded;

	inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image

	//morphological opening (remove small objects from the foreground)
	erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

	//morphological closing (fill small holes in the foreground)
	dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

	imshow("Thresholded Image", imgThresholded); //show the thresholded image
	imshow("Original", imgRGB); //show the original image

	cv::waitKey(80);
}

void FindPuck::tresCores(Mat imgRGB)
{
	Mat imgHSV;

	cvtColor(imgRGB, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

	Mat img_Vermelha;
	Mat img_Verde;
	Mat img_Amarela;

	inRange(imgHSV, Scalar(18, 12, 208), Scalar(34, 75, 255), img_Vermelha); //Threshold the image
	inRange(imgHSV, Scalar(30, 92, 208), Scalar(179, 149, 255), img_Verde); //Threshold the image
	inRange(imgHSV, Scalar(11, 239, 208), Scalar(59, 255, 255), img_Amarela); //Threshold the image

	//morphological opening (remove small objects from the foreground)
	erode(img_Vermelha, img_Vermelha, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	dilate( img_Vermelha, img_Vermelha, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	//morphological closing (fill small holes in the foreground)
	dilate( img_Vermelha, img_Vermelha, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	erode(img_Vermelha, img_Vermelha, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

	//morphological opening (remove small objects from the foreground)
	erode(img_Verde, img_Verde, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	dilate( img_Verde, img_Verde, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	//morphological closing (fill small holes in the foreground)
	dilate( img_Verde, img_Verde, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	erode(img_Verde, img_Verde, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

	//morphological opening (remove small objects from the foreground)
	erode(img_Amarela, img_Amarela, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	dilate( img_Amarela, img_Amarela, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	//morphological closing (fill small holes in the foreground)
	dilate( img_Amarela, img_Amarela, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
	erode(img_Amarela, img_Amarela, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

	imshow("Vermelha", img_Vermelha); //show the thresholded image
	imshow("Verde", img_Verde); //show the thresholded image
	imshow("Amarela", img_Amarela); //show the thresholded image
	imshow("Original", imgRGB); //show the original image

	cv::waitKey(80);
}
