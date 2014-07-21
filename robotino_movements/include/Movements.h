#ifndef Movements_H
#define Movements_H

#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <nav_msgs/Odometry.h>
#include <tf/transform_datatypes.h>
#include <robotino_msgs/ResetOdometry.h>

#include <ros/ros.h>

#define PI 3.14159
#define positivo true

class Movements
{
public:
	Movements();
	~Movements();

	void spin();

private:

	// Node
	ros::NodeHandle nh_;

	// Publishers
	ros::Publisher cmd_vel_pub_;
	ros::Publisher robot_pub;

	// Subscribers
	ros::Subscriber odometry_sub_;
	ros::Subscriber scan_sub_;

	// Clients
	ros::ServiceClient resetOdo_cl;

	// Variables
	geometry_msgs::Twist cmd_vel_msg_;
	robotino_msgs::ResetOdometry srv;
	double posX;
	double posY;
	double phi;
	double odomX;
	double odomY;
	double odomPhi;
	double prev_phi_, prev_x_, prev_y_;
	double mini_x_, mini_y_, mini_phi_;
	float distanceSensors[10];
	double velReductionFactor;

	// Functions
	void setCmdVel(double vel_x, double vel_y, double vel_phi);
	void odomCallback(const nav_msgs::OdometryConstPtr& msg);
	void scanCallback(const sensor_msgs::LaserScan& msg);
	void publishCmdVel(); // TEM QUE SER CHAMADA O TEMPO TODO! SE NAO O ROBO NAO ANDA!

};

#endif /* Movements_H */
