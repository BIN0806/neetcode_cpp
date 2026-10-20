#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {10,9,2,5,3,7,101,18};
        auto actual = s.lengthOfLIS(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {0,1,0,3,2,3};
        auto actual = s.lengthOfLIS(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {7,7,7,7};
        auto actual = s.lengthOfLIS(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {5,4,3,2,1};
        auto actual = s.lengthOfLIS(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {-2,-1,0};
        auto actual = s.lengthOfLIS(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
