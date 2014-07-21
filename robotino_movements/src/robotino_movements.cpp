#include "Movements.h"

#include <ros/ros.h>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "robotino_movements");
	Movements mvNode;
	mvNode.spin();
	return 0;
}
