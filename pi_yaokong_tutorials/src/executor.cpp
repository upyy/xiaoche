#include "SmartCar.hpp"  
#include <ros/ros.h>  
#include <std_msgs/UInt8.h>  
SmartCar car;  
  
void commandsCallback(const std_msgs::UInt8::ConstPtr& msg)  
{  
  ROS_INFO("I heard: [%d]", msg->data);  
  car.go(msg->data);  
}  
  
int main(int argc, char** argv)  
{  
  ros::init(argc, argv, "executor");  
  ros::NodeHandle n;  
  ros::Subscriber sub = n.subscribe("commands", 1000, commandsCallback);  
  ros::spin();  
  
  return 0;  
}
