#include "ros/ros.h"
#include "sus2/AddTwoins.h"

bool add(sus2::AddTwoins::Request &req, sus2::AddTwoins::Response &res){
    res.sum = req.a + req.b;
    return true;
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Service_node");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("add_two_ins", add);

    ros::spin();

    return 0;
}
