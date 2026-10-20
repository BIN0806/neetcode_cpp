#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {4,5,6,7,0,1,2};
        int a1 = 0;
        auto actual = s.search(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {4,5,6,7,0,1,2};
        int a1 = 3;
        auto actual = s.search(a0, a1);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        int a1 = 0;
        auto actual = s.search(a0, a1);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1};
        int a1 = 1;
        auto actual = s.search(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {3,1};
        int a1 = 1;
        auto actual = s.search(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
