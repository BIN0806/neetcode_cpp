#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,3,4,2,2};
        auto actual = s.findDuplicate(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {3,1,3,4,2};
        auto actual = s.findDuplicate(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {3,3,3,3,3};
        auto actual = s.findDuplicate(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1,1};
        auto actual = s.findDuplicate(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
