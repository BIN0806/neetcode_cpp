#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        double a0 = 2.0;
        int a1 = 10;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, 1024.0);
    });
    nc::test("case 2", [] {
        Solution s;
        double a0 = 2.1;
        int a1 = 3;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, 9.261);
    });
    nc::test("case 3", [] {
        Solution s;
        double a0 = 2.0;
        int a1 = -2;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, 0.25);
    });
    nc::test("case 4", [] {
        Solution s;
        double a0 = -2.0;
        int a1 = 3;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, -8.0);
    });
    nc::test("case 5", [] {
        Solution s;
        double a0 = 2.0;
        int a1 = 0;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, 1.0);
    });
    nc::test("case 6", [] {
        Solution s;
        double a0 = 1.0;
        int a1 = INT_MIN;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, 1.0);
    });
    nc::test("case 7", [] {
        Solution s;
        double a0 = 2.0;
        int a1 = INT_MIN;
        auto actual = s.myPow(a0, a1);
        nc::near(actual, 0.0);
    });
    return nc::finish();
}
