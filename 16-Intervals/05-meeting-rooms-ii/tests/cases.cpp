#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<vector<int>> a0 = {{0,30},{5,10},{15,20}};
        auto actual = s.minMeetingRooms(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<vector<int>> a0 = {{7,10},{2,4}};
        auto actual = s.minMeetingRooms(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<vector<int>> a0 = {};
        auto actual = s.minMeetingRooms(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,2},{2,3}};
        auto actual = s.minMeetingRooms(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<vector<int>> a0 = {{1,5},{1,5},{1,5}};
        auto actual = s.minMeetingRooms(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
