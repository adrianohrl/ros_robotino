#include "ros/ros.h"

#include "std_msgs/String.h"
#include <geometry_msgs/Twist.h>
#include <sstream>
#include <vector>
#include <iostream>
#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"
#include "std_msgs/Int32MultiArray.h"
#include "std_msgs/Float32MultiArray.h"
#include <sensor_msgs/LaserScan.h>

geometry_msgs::Twist cmd_vel_msg_;

void scanCallback(const sensor_msgs::LaserScan& msg)
{
	if( msg.ranges[0] < 0.58 || msg.ranges[1] < 0.58 || msg.ranges[8] < 0.58)
	{
		cmd_vel_msg_.linear.x 	= 0;
		cmd_vel_msg_.linear.y  	= 0;
		cmd_vel_msg_.angular.z 	= 0;
	}
	else
	{
		cmd_vel_msg_.linear.x 	= 0.2;
		cmd_vel_msg_.linear.y  	= 0;
		cmd_vel_msg_.angular.z 	= 0;
	}
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "talker");
    ros::NodeHandle n;

    ros::Subscriber scan_sub = n.subscribe("scan", 10, scanCallback);
    ros::Publisher cmdvel_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1, true);

    ros::Rate loop_rate(10);

    int count = 0;

	cmd_vel_msg_.linear.x 	= 0.2;
        cmd_vel_msg_.linear.y  	= 0;
        cmd_vel_msg_.angular.z 	= 0;

    // loop one approach the ball
    while (ros::ok())
    {
        //std::cout<< "Vel set "<< std::endl;

        // once we have reached the target location within tolerance break from the loop
        if(count == 50)
        {
            //break;
        }

        cmdvel_pub.publish(cmd_vel_msg_);

        ros::spinOnce();

        loop_rate.sleep();

        ++count;
    }

    //end program
    return 0;
}
