#include "ros/ros.h"
#include "std_msgs/Header.h"

void writeMsgToLOg(const std_msgs:Header &ranges){
    ROS_INFO(ranges);
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Subscriber");
    ros::NodeHandle nh;

    ros::Subscriber topic_sub = nh.subscribe("sus", 1000, writeMsgToLOg);

    ros::spin();

    return 0;
}
