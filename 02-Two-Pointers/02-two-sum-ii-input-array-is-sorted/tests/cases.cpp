#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {2,7,11,15};
        int a1 = 9;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {1,2};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2,3,4};
        int a1 = 6;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {1,3};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {-1,0};
        int a1 = -1;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {1,2};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {0,0,3,4};
        int a1 = 0;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {1,2};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
