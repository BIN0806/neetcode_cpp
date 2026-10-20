#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {3,6,7,11};
        int a1 = 8;
        auto actual = s.minEatingSpeed(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {30,11,23,4,20};
        int a1 = 5;
        auto actual = s.minEatingSpeed(a0, a1);
        int expected = 30;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {30,11,23,4,20};
        int a1 = 6;
        auto actual = s.minEatingSpeed(a0, a1);
        int expected = 23;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {312884470};
        int a1 = 968709470;
        auto actual = s.minEatingSpeed(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {1000000000,1000000000,1000000000};
        int a1 = 1000000000;
        auto actual = s.minEatingSpeed(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
