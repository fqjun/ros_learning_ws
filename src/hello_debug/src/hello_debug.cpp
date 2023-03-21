/*
    控制台输出 HelloVSCode !!!

*/
#include "ros/ros.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    //执行节点初始化
    ros::init(argc,argv,"HelloVSCode");

while(ros::ok()){


    //输出日志
    ROS_INFO("Hello Debug!!! NONONONONONONO");
    sleep(1);
}
    return 0;
}
