#include <iostream>
#include <utility>
#include <vector>
#include <limits>

class MeetingPlanner {
public:
    MeetingPlanner() = default;
    ~MeetingPlanner() = default;

    std::pair<int, int> plannMetting(const std::vector<std::pair<int,int>>& slotA, const std::vector<std::pair<int,int>>& slotB, int dur);
};