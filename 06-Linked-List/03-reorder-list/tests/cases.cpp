#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto a0 = nc::linked({1,2,3,4});
        s.reorderList(a0);
        auto actual = a0;
        nc::eq(nc::values(actual), vector<int>{1,4,2,3});
    });
    nc::test("case 2", [] {
        Solution s;
        auto a0 = nc::linked({1,2,3,4,5});
        s.reorderList(a0);
        auto actual = a0;
        nc::eq(nc::values(actual), vector<int>{1,5,2,4,3});
    });
    nc::test("case 3", [] {
        Solution s;
        auto a0 = nc::linked({1});
        s.reorderList(a0);
        auto actual = a0;
        nc::eq(nc::values(actual), vector<int>{1});
    });
    nc::test("case 4", [] {
        Solution s;
        auto a0 = nc::linked({1,2});
        s.reorderList(a0);
        auto actual = a0;
        nc::eq(nc::values(actual), vector<int>{1,2});
    });
    return nc::finish();
}
