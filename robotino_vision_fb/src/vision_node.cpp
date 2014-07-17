#include <ros/ros.h>
#include "std_msgs/String.h"
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"
#include "std_msgs/Int32MultiArray.h"
#include <opencv/cv.h>

namespace enc = sensor_msgs::image_encodings;
using namespace cv;

class ImageConverter
{

    // declare all of our node handelers
    ros::NodeHandle nh_;
    ros::NodeHandle n;
    image_transport::ImageTransport it_;
    image_transport::Subscriber image_sub_;
    ros::Publisher pos_pub_;


public:
    //  declare variables to be use later
    IplImage* imgTracking;
    int lastX;
    int lastY;
    int posX;
    int posY;
    Mat src_gray;

    ImageConverter()
        : it_(nh_)
    {
        pos_pub_= n.advertise<std_msgs::Int32MultiArray>("obj_pos", 2);
        image_sub_ = it_.subscribe("image_raw", 1, &ImageConverter::imageCb, this);
    }
 
    ~ImageConverter()
    {
    }
 
    IplImage* GetThresholdedImage(IplImage* imgHSV)
    {
        IplImage* imgThresh=cvCreateImage(cvGetSize(imgHSV),IPL_DEPTH_8U, 1);
 
        // below we select the HSV values.  Thes are the values for the ball I am using on my robotino's webcam
        cvInRangeS(imgHSV, cvScalar(67,80,32), cvScalar(91,174,99), imgThresh);
        return imgThresh;
    }
 
    void thresh_callback(int, void* )
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
        imshow( "Imagem Filtrada", drawing );

	printf("Pos: %i, %i\n", posX, posY);

	// the code belosw is used to send a size 2 array to indicate the position
	// sent as rostopic /obj_pos
	std_msgs::Int32MultiArray array;
	array.data.clear();
	array.data.push_back(posX);
	array.data.push_back(posY);
	pos_pub_.publish(array);
    }
 
 
    void imageCb(const sensor_msgs::ImageConstPtr& msg)
    {
        // get the pointer to the open cv image
        cv_bridge::CvImagePtr cv_ptr;
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
        }
        catch (cv_bridge::Exception& e)
        {
            ROS_ERROR("cv_bridge exception: %s", e.what());
            return;
        }
 
        if (cv_ptr->image.rows > 60 && cv_ptr->image.cols > 60)
        {
            IplImage* frame=new IplImage(cv_ptr->image);  // in our case the source of the image is different
            // than that of the tutorial so we and to select frame from our cv_pointer we got from our open cv link
 
            imgTracking=cvCreateImage(cvGetSize(frame),IPL_DEPTH_8U, 3);
 
            cvZero(imgTracking); //covert the image, 'imgTracking' to black
 
            frame=cvCloneImage(frame);
 
            cvSmooth(frame, frame, CV_GAUSSIAN,3,3); //smooth the original image using Gaussian kernel
 
            IplImage* imgHSV = cvCreateImage(cvGetSize(frame), IPL_DEPTH_8U, 3);
            cvCvtColor(frame, imgHSV, CV_BGR2HSV); //Change the color format from BGR to HSV
            imgTracking = GetThresholdedImage(imgHSV);
 
            /// blur it
            blur( (Mat)imgTracking, src_gray, Size(3,3) );
 
            thresh_callback( 0, 0 );
 
            //Clean up used images
            cvReleaseImage(&frame);
        }
        cv::imshow("Imagem Original", cv_ptr->image);
        cv::waitKey(3);
    }
};
 
int main(int argc, char** argv)
{
    ros::init(argc, argv, "vision_node");
    ImageConverter ic;

	ros::Rate loop_rate(10);
	// loop one approach the ball
	while (ros::ok())
	{
		ros::spinOnce();
		loop_rate.sleep();
	}
	return 0;
}
 
