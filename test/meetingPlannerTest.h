#ifndef MEETING_PLANNER_TEST
#define MEETING_PLANNER_TEST

#include <iostream>
#include <vector>
#include "../src/meetingPlanner.h"

class MeetingPlannerTest {
public:
    static void runTests();

private:
    static void testCommonSlotFound();
    static void testNoCommonSlot();
    static void testNoDurationSlot();
    static void testSingleSlot();
    
    static void assert(const std::pair<int, int>& res, const std::pair<int, int>& expected);
};

#endif //MEETING_PLANNER_TEST