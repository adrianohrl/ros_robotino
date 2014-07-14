#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

static const char WINDOW[] = "Image window";

class ImageConverter {
	ros::NodeHandle nh_;
	image_transport::ImageTransport it_;
	image_transport::Subscriber image_sub_;
	image_transport::Publisher image_pub_;
	std::vector<cv::Point> points_;

public:
	ImageConverter() :
			it_(nh_) {
		image_pub_ = it_.advertise("/webcam/image/processed", 1);
		image_sub_ = it_.subscribe("/webcam/image", 1, &ImageConverter::imageCb,
				this);

		cv::namedWindow(WINDOW);
	}

	~ImageConverter() {
		cv::destroyWindow(WINDOW);
	}

	void imageCb(const sensor_msgs::ImageConstPtr& msg) {
		cv_bridge::CvImagePtr cv_ptr;
		try {
			cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");
		} catch (cv_bridge::Exception& e) {
			ROS_ERROR("cv_bridge exception: %s", e.what());
			return;
		}

		cv::Mat HSV, threshold;
		cv::cvtColor(cv_ptr->image, HSV, CV_BGR2HSV);
		cv::inRange(HSV, cv::Scalar(100, 150, 0), cv::Scalar(140, 255, 255),
				threshold);
		cv::erode(threshold, threshold,
				cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 5)));
		cv::dilate(threshold, threshold,
				cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 5)));

		cv::Moments oMoments = cv::moments(threshold);

		double dM01 = oMoments.m01;
		double dM10 = oMoments.m10;
		double dArea = oMoments.m00;

		if (dArea > 10000) {
			int posX = dM10 / dArea;
			int posY = dM01 / dArea;

			if (posX >= 0 && posY >= 0) {
				points_.push_back(cv::Point(posX, posY));
			}
		}

		if (points_.size() > 0) {
			for (std::vector<cv::Point>::const_iterator iterator = points_.begin(),
					end = points_.end() - 1; iterator != end; ++iterator) {
				cv::line(cv_ptr->image, *iterator, *(iterator + 1),
						cv::Scalar(0, 0, 255), 2);
			}
		}

		cv::imshow(WINDOW, cv_ptr->image);
		cv::waitKey(3);

		image_pub_.publish(cv_ptr->toImageMsg());
	}
};

int main(int argc, char** argv) {
	ros::init(argc, argv, "image_converter");
	ImageConverter ic;
	ros::spin();
	return 0;
}
