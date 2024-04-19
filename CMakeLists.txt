cmake_minimum_required(VERSION 3.5...3.21)
project(Meeting-Planner)

set(SOURCES 
    main.cpp
    src/meetingPlanner.cpp
    test/meetingPlannerTest.cpp)

add_executable(Meeting-Planner ${SOURCES})

set_target_properties(Meeting-Planner PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)