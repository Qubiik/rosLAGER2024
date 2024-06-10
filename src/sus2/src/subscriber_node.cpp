#include "ros/ros.h"
#include "std_msgs/String.h"

void writeMsgToLOg(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("The message that we received was: %s", msg->data.c_str());
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Subscriber");
    ros::NodeHandle nh;

    ros::Subscriber topic_sub = nh.subscribe("sus", 1000, writeMsgToLOg);

    ros::spin();

    return 0;
}
