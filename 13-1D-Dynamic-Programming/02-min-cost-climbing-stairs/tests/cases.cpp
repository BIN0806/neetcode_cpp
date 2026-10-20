#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {10,15,20};
        auto actual = s.minCostClimbingStairs(a0);
        int expected = 15;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1,100,1,1,1,100,1,1,100,1};
        auto actual = s.minCostClimbingStairs(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {0,0};
        auto actual = s.minCostClimbingStairs(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {5,10};
        auto actual = s.minCostClimbingStairs(a0);
        int expected = 5;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
