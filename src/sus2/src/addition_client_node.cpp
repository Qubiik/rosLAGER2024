#include "ros/ros.h"
#include "sus2/AddTwoins.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "Addition_service_client_node");
    ros::NodeHandle nh;

    ros::ServiceClient client = nh.serviceClient<sus2::AddTwoins>("add_two_ins");

    sus2::AddTwoins srv;
    srv.request.a = 2;
    srv.request.b = 4;

    if(client.call(srv)){
        ROS_INFO("You sum %ld", srv.response.sum);
    }
    else{
        ROS_INFO("Failed");
        return 1;
    }

    return 0;
}