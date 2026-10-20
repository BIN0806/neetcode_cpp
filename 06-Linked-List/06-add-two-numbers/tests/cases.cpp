#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto a0 = nc::linked({2,4,3});
        auto a1 = nc::linked({5,6,4});
        auto actual = s.addTwoNumbers(a0, a1);
        nc::eq(nc::values(actual), vector<int>{7,0,8});
    });
    nc::test("case 2", [] {
        Solution s;
        auto a0 = nc::linked({0});
        auto a1 = nc::linked({0});
        auto actual = s.addTwoNumbers(a0, a1);
        nc::eq(nc::values(actual), vector<int>{0});
    });
    nc::test("case 3", [] {
        Solution s;
        auto a0 = nc::linked({9,9,9,9,9,9,9});
        auto a1 = nc::linked({9,9,9,9});
        auto actual = s.addTwoNumbers(a0, a1);
        nc::eq(nc::values(actual), vector<int>{8,9,9,9,0,0,0,1});
    });
    nc::test("case 4", [] {
        Solution s;
        auto a0 = nc::linked({9});
        auto a1 = nc::linked({1});
        auto actual = s.addTwoNumbers(a0, a1);
        nc::eq(nc::values(actual), vector<int>{0,1});
    });
    return nc::finish();
}
