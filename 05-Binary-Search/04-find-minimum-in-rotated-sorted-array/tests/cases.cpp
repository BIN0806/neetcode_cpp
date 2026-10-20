#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {3,4,5,1,2};
        auto actual = s.findMin(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {4,5,6,7,0,1,2};
        auto actual = s.findMin(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {11,13,15,17};
        auto actual = s.findMin(a0);
        int expected = 11;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2,1};
        auto actual = s.findMin(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.findMin(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
