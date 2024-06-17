#include "sensor_msgs/LaserScan.h"
#include "std_msgs/Header.h"
#include "ros/ros.h"
#include <stdio.h>

int main(){
    ros::init(argc, argv, "Publisher_lidar");
    ros::NodeHandle nh;
    sensor_msgs::LaserScan scan;
    ros::Publisher_lidar topic_pub = nh.advertise<std_msgs::Header>("sus", 1000);
    while(ros::ok()){
        std_msgs::Header;
        topic_pub.publish(Header);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}