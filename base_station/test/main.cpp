#include "rover_msgs/Target.hpp"
#include "rover_msgs/TargetList.hpp"
#include <lcm/lcm-cpp.hpp>

int main(){
    lcm::LCM lcm_;  
    rover_msgs::TargetList arTagsMessage;  
    rover_msgs::Target* arTags = arTagsMessage.targetList;
    
    while(true){
    arTags[0].distance = -10;
    lcm_.publish("/target_list", &arTagsMessage);
    }
}
