#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 12;
        vector<int> a1 = {10,8,0,5,3};
        vector<int> a2 = {2,4,1,1,3};
        auto actual = s.carFleet(a0, a1, a2);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 10;
        vector<int> a1 = {3};
        vector<int> a2 = {3};
        auto actual = s.carFleet(a0, a1, a2);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 100;
        vector<int> a1 = {0,2,4};
        vector<int> a2 = {4,2,1};
        auto actual = s.carFleet(a0, a1, a2);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 10;
        vector<int> a1 = {0,4};
        vector<int> a2 = {1,2};
        auto actual = s.carFleet(a0, a1, a2);
        int expected = 2;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
