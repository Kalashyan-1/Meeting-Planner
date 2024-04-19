#include "meetingPlannerTest.h"

void MeetingPlannerTest::runTests() {
    testCommonSlotFound();
    testNoCommonSlot();
    testNoDurationSlot();
    testSingleSlot();
}

void MeetingPlannerTest::testCommonSlotFound() {
    MeetingPlanner planner;
    std::vector<std::pair<int, int>> slotA = {{10, 50}, {60, 120}, {140, 210}};
    std::vector<std::pair<int, int>> slotB = {{0, 15}, {60, 70}};
    int dur = 8;
    std::pair<int, int> expected = {60, 68};

    std::pair<int, int> result = planner.plannMetting(slotA, slotB, dur);

    assert(result, expected);
}

void MeetingPlannerTest::testNoCommonSlot() {
    MeetingPlanner planner;
    std::vector<std::pair<int, int>> slotA = {{10, 50}, {60, 120}, {140, 210}};
    std::vector<std::pair<int, int>> slotB = {{0, 15}, {60, 70}};
    int dur = 12;
    std::pair<int, int> expected = {};
    
    std::pair<int, int> result = planner.plannMetting(slotA, slotB, dur);

    assert(result, expected);
}


void MeetingPlannerTest::testNoDurationSlot() {
    MeetingPlanner planner;
    std::vector<std::pair<int, int>> slotA = {{30, 50}, {70, 120}, {130, 210}};
    std::vector<std::pair<int, int>> slotB = {{11, 25}, {220, 230}};
    int dur = 100;
    std::pair<int, int> expected = {};


    std::pair<int, int> result = planner.plannMetting(slotA, slotB, dur);

    assert(result, expected);
}

void MeetingPlannerTest::testSingleSlot() {
    MeetingPlanner planner;
    std::vector<std::pair<int, int>> slotA = {{10, 50}};
    std::vector<std::pair<int, int>> slotB = {{0, 20}};
    int dur = 8;
    std::pair<int, int> expected = {10, 18};

    std::pair<int, int> result = planner.plannMetting(slotA, slotB, dur);

    assert(result, expected);
}


void MeetingPlannerTest::assert(const std::pair<int, int>& res, const std::pair<int, int>& expected) {
    if (res == expected) {
        std::cout << "\033[1;32mTest Passed\033[0m" << std::endl;
    } else {
        std::cout << "\033[1;31mTest Failed\033[0m. Expected: (" << expected.first << ", " << expected.second << "), Actual: (" << res.first << ", " << res.second << ")" << std::endl;
    }
}