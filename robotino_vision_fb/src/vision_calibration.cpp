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

int iLowH = 0;
int iHighH = 179;

int iLowS = 0;
int iHighS = 255;

int iLowV = 0;
int iHighV = 255;

using namespace cv;
using namespace std;
namespace enc = sensor_msgs::image_encodings;

class ImageConverter
{

    // declare all of our node handelers
    ros::NodeHandle nh_;
    image_transport::ImageTransport it_;
    image_transport::Subscriber image_sub_;
    ros::Publisher pos_pub_;


public:
    //  declare variables to be use later
    IplImage* imgTracking;
    int lastX;
    int lastY;
    ros::NodeHandle n;

    ImageConverter()
        : it_(nh_)
    {
        pos_pub_= n.advertise<std_msgs::Int32MultiArray>("obj_pos", 2);
        image_sub_ = it_.subscribe("image_raw", 1, &ImageConverter::imageCb, this);

        namedWindow("Control", CV_WINDOW_AUTOSIZE); //create a window called "Control"

        //Create trackbars in "Control" window
        cvCreateTrackbar("LowH", "Control", &iLowH, 179); //Hue (0 - 179)
        cvCreateTrackbar("HighH", "Control", &iHighH, 179);

        cvCreateTrackbar("LowS", "Control", &iLowS, 255); //Saturation (0 - 255)
        cvCreateTrackbar("HighS", "Control", &iHighS, 255);

        cvCreateTrackbar("LowV", "Control", &iLowV, 255); //Value (0 - 255)
        cvCreateTrackbar("HighV", "Control", &iHighV, 255);
    }

    ~ImageConverter()
    {
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

            frame=cvCloneImage(frame);

            Mat imgOriginal(frame);

            Mat imgHSV;

            cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

            Mat imgThresholded;

            inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image

//morphological opening (remove small objects from the foreground)
            erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
            dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

//morphological closing (fill small holes in the foreground)
            dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
            erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

            imshow("Thresholded Image", imgThresholded); //show the thresholded image
            imshow("Original", imgOriginal); //show the original image

            //Clean up used images
            cvReleaseImage(&frame);  // we created a pointer so we need to clean it up before we
        }
        cv::waitKey(3);
    }
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "vision");
    ImageConverter ic;
    ros::spin();
    return 0;
}

