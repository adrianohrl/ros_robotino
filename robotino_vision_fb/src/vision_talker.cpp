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


// declare global vars
void arrayCallback(const std_msgs::Int32MultiArray::ConstPtr& array);
int Arr[2];


int main(int argc, char **argv)
{
    int targetX=160;
    int targetY=225;
    float posGain=.01;
    ros::init(argc, argv, "talker");
    ros::NodeHandle n;
    ros::Subscriber ball_sub = n.subscribe("obj_pos", 100, arrayCallback);

    ros::Publisher chatter_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1, true);

    ros::Rate loop_rate(10);

    int count = 0;

    // loop one approach the ball
    while (ros::ok())
    {
        std::cout<< "x: " << abs(targetY-Arr[1]) << std::endl;
        std::cout<< "y: " << abs(targetX-Arr[0]) << std::endl;


        geometry_msgs::Twist cmd_vel_msg_;

        cmd_vel_msg_.linear.x 	= 0;
        cmd_vel_msg_.linear.y  	= 0;
        cmd_vel_msg_.angular.z 	= 0;


        // move the vehicle so that the ball is in the target location on the camera screen.
        if(Arr[0]>0)
        {
            if(abs(targetY-Arr[1])>2)  cmd_vel_msg_.linear.x 	= (targetY-Arr[1])*posGain;
            if(abs(targetX-Arr[0])>2)  cmd_vel_msg_.linear.y  	= (targetX-Arr[0])*posGain;
            std::cout<< "Vel set "<< std::endl;
        }

        // once we have reached the target location within tolerance break from the loop
        if(abs(targetY-Arr[1])<2  &&  abs(targetX-Arr[0])<2)
        {
            break;
        }

        chatter_pub.publish(cmd_vel_msg_);

        ros::spinOnce();

        loop_rate.sleep();

        ++count;
    }

    //end program
    return 0;
}


void arrayCallback(const std_msgs::Int32MultiArray::ConstPtr& array)
{

    int i = 0;
    // print all the remaining numbers
    for(std::vector<int>::const_iterator it = array->data.begin(); it != array->data.end(); ++it)
    {
        Arr[i] = *it;
        i++;
    }

    return;
}
