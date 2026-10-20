#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({3,4,5,1,2});
        auto* a1=nc::tree({4,1,2});
        nc::eq(s.isSubtree(a0, a1),true);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({3,4,5,1,2,nullopt,nullopt,nullopt,nullopt,0});
        auto* a1=nc::tree({4,1,2});
        nc::eq(s.isSubtree(a0, a1),false);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1});
        auto* a1=nc::tree({1});
        nc::eq(s.isSubtree(a0, a1),true);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({1});
        auto* a1=nc::tree({2});
        nc::eq(s.isSubtree(a0, a1),false);
    });
    return nc::finish();
}
