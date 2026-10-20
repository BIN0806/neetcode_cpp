#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({1,2,3,nullopt,5,nullopt,4});
        nc::eq(s.rightSideView(a0),vector<int>{1,3,4});
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({});
        nc::eq(s.rightSideView(a0),vector<int>{});
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1,nullopt,3});
        nc::eq(s.rightSideView(a0),vector<int>{1,3});
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({1,2,nullopt,3});
        nc::eq(s.rightSideView(a0),vector<int>{1,2,3});
    });
    return nc::finish();
}
