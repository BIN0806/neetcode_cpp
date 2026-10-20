#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {100,4,200,1,3,2};
        auto actual = s.longestConsecutive(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {0,3,7,2,5,8,4,6,0,1};
        auto actual = s.longestConsecutive(a0);
        int expected = 9;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {};
        auto actual = s.longestConsecutive(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1,2,0,1};
        auto actual = s.longestConsecutive(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {-2,-1,0,2};
        auto actual = s.longestConsecutive(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
