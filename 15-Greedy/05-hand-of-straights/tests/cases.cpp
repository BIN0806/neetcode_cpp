#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3,6,2,3,4,7,8};
        int a1 = 3;
        auto actual = s.isNStraightHand(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1,2,3,4,5};
        int a1 = 4;
        auto actual = s.isNStraightHand(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1,2,3,4};
        int a1 = 1;
        auto actual = s.isNStraightHand(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1,1,2,2,3,3};
        int a1 = 3;
        auto actual = s.isNStraightHand(a0, a1);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {1,2,4,5,6,7};
        int a1 = 3;
        auto actual = s.isNStraightHand(a0, a1);
        bool expected = false;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
