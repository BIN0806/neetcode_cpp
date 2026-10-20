#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({3,1,4,3,nullopt,1,5});
        nc::eq(s.goodNodes(a0),4);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({3,3,nullopt,4,2});
        nc::eq(s.goodNodes(a0),3);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1});
        nc::eq(s.goodNodes(a0),1);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({-1,-2,-3});
        nc::eq(s.goodNodes(a0),1);
    });
    return nc::finish();
}
