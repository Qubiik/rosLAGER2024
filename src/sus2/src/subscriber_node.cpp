#include "ros/ros.h"
#include "sus2/person_data.h"

void writeMsgToLOg(const sus2::person_data::ConstPtr& persodata){
    ROS_INFO("The message that we received was: %s", msg->data.c_str());
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Subscriber");
    ros::NodeHandle nh;

    ros::Subscriber topic_sub = nh.subscribe("sus", 1000, writeMsgToLOg);

    ros::spin();

    return 0;
}
