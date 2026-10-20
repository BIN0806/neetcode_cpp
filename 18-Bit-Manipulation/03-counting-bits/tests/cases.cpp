#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 2;
        auto actual = s.countBits(a0);
        vector<int> expected = {0,1,1};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 5;
        auto actual = s.countBits(a0);
        vector<int> expected = {0,1,1,2,1,2};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = 0;
        auto actual = s.countBits(a0);
        vector<int> expected = {0};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = 1;
        auto actual = s.countBits(a0);
        vector<int> expected = {0,1};
        nc::eq(actual, expected);
    });
    return nc::finish();
}
