#include "src/meetingPlanner.h"

int main() {
    MeetingPlanner planner;
    
    auto res = planner.plannMetting({{10, 50}, {60, 120}, {140, 210}}, {{0, 15}, {60, 70}}, 8);
    // auto res = planner.plannMetting({{10, 50}, {60, 120}, {140, 210}}, {}, 8);

    std::cout << std::endl;
    std::cout << res.first << " " << res.second << std::endl;
} 