#include "meetingPlanner.h"

std::pair<int, int> MeetingPlanner::plannMetting(const std::vector<std::pair<int,int>>& slotA, const std::vector<std::pair<int,int>>& slotB, int dur) {
    int i = 0, j = 0;

    int first = std::numeric_limits<int>::max();
    int second = std::numeric_limits<int>::min();

    while (i < slotA.size() && j < slotB.size()) {
        first = std::max(slotA[i].first, slotB[j].first);
        second = std::min(slotA[i].second, slotB[j].second);

        if ((second - first) < dur) {
            if (slotA[i].second > slotB[j].second)
                ++j;
            else
                ++i;
        } else {
            return {first, first + dur};
        }
    }
    return {};
}




