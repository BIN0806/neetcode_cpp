#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto a0 = nc::linked({1,2,4});
        auto a1 = nc::linked({1,3,4});
        auto actual = s.mergeTwoLists(a0, a1);
        nc::eq(nc::values(actual), vector<int>{1,1,2,3,4,4});
    });
    nc::test("case 2", [] {
        Solution s;
        auto a0 = nc::linked({});
        auto a1 = nc::linked({});
        auto actual = s.mergeTwoLists(a0, a1);
        nc::eq(nc::values(actual), vector<int>{});
    });
    nc::test("case 3", [] {
        Solution s;
        auto a0 = nc::linked({});
        auto a1 = nc::linked({0});
        auto actual = s.mergeTwoLists(a0, a1);
        nc::eq(nc::values(actual), vector<int>{0});
    });
    nc::test("case 4", [] {
        Solution s;
        auto a0 = nc::linked({-5,-1});
        auto a1 = nc::linked({-3,2});
        auto actual = s.mergeTwoLists(a0, a1);
        nc::eq(nc::values(actual), vector<int>{-5,-3,-1,2});
    });
    return nc::finish();
}
