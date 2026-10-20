#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<char> a0 = {'A','A','A','B','B','B'};
        int a1 = 2;
        auto actual = s.leastInterval(a0, a1);
        int expected = 8;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<char> a0 = {'A','A','A','B','B','B'};
        int a1 = 0;
        auto actual = s.leastInterval(a0, a1);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<char> a0 = {'A'};
        int a1 = 100;
        auto actual = s.leastInterval(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<char> a0 = {'A','A','A','A','A','A','B','C','D','E','F','G'};
        int a1 = 2;
        auto actual = s.leastInterval(a0, a1);
        int expected = 16;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
