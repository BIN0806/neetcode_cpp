#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {2,7,4,1,8,1};
        auto actual = s.lastStoneWeight(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.lastStoneWeight(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {2,2};
        auto actual = s.lastStoneWeight(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {10,3,2};
        auto actual = s.lastStoneWeight(a0);
        int expected = 5;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
