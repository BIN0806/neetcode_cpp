#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        int a0 = 1;
        int a1 = 2;
        auto actual = s.getSum(a0, a1);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        int a0 = 2;
        int a1 = 3;
        auto actual = s.getSum(a0, a1);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        int a0 = -1;
        int a1 = 1;
        auto actual = s.getSum(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        int a0 = -2;
        int a1 = -3;
        auto actual = s.getSum(a0, a1);
        int expected = -5;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        int a0 = -10;
        int a1 = 4;
        auto actual = s.getSum(a0, a1);
        int expected = -6;
        nc::eq(actual, expected);
    });
    nc::test("case 6", [] {
        Solution s;
        int a0 = 0;
        int a1 = 0;
        auto actual = s.getSum(a0, a1);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(371);for(int i=0;i<300;++i){int a=int(rng()%2001)-1000,b=int(rng()%2001)-1000;Solution s;nc::eq(s.getSum(a,b),a+b);}
    });
    return nc::finish();
}
