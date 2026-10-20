#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3,0,2};
        auto actual = s.maxProfit(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.maxProfit(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {2,1};
        auto actual = s.maxProfit(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1,2,4};
        auto actual = s.maxProfit(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {6,1,3,2,4,7};
        auto actual = s.maxProfit(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
