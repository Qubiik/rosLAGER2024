#include "ros/ros.h"
#include "sus2/person_data.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "Publisher");
    ros::NodeHandle nh;

    ros::Publisher topic_pub = nh.advertise<sus2::person_data>("sus", 1000);
    ros::Rate loop_rate(1);
    while(ros::ok()){
        sus2::person_data person_data;
        person_data.name = "Arkasha";
        person_data.age = 14;
        person_data.color = "Pink";

        topic_pub.publish(person_data);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}