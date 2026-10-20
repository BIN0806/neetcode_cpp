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
        int a1 = 2;
        auto actual = s.reverseKGroup(a0, a1);
        nc::eq(nc::values(actual), vector<int>{2,1,4,3,5});
    });
    nc::test("case 2", [] {
        Solution s;
        auto a0 = nc::linked({1,2,3,4,5});
        int a1 = 3;
        auto actual = s.reverseKGroup(a0, a1);
        nc::eq(nc::values(actual), vector<int>{3,2,1,4,5});
    });
    nc::test("case 3", [] {
        Solution s;
        auto a0 = nc::linked({1});
        int a1 = 1;
        auto actual = s.reverseKGroup(a0, a1);
        nc::eq(nc::values(actual), vector<int>{1});
    });
    nc::test("case 4", [] {
        Solution s;
        auto a0 = nc::linked({1,2,3,4});
        int a1 = 4;
        auto actual = s.reverseKGroup(a0, a1);
        nc::eq(nc::values(actual), vector<int>{4,3,2,1});
    });
    return nc::finish();
}
