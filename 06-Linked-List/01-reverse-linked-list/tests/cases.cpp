#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto a0 = nc::linked({1,2,3,4,5});
        auto actual = s.reverseList(a0);
        nc::eq(nc::values(actual), vector<int>{5,4,3,2,1});
    });
    nc::test("case 2", [] {
        Solution s;
        auto a0 = nc::linked({1,2});
        auto actual = s.reverseList(a0);
        nc::eq(nc::values(actual), vector<int>{2,1});
    });
    nc::test("case 3", [] {
        Solution s;
        auto a0 = nc::linked({});
        auto actual = s.reverseList(a0);
        nc::eq(nc::values(actual), vector<int>{});
    });
    nc::test("case 4", [] {
        Solution s;
        auto a0 = nc::linked({9});
        auto actual = s.reverseList(a0);
        nc::eq(nc::values(actual), vector<int>{9});
    });
    return nc::finish();
}
