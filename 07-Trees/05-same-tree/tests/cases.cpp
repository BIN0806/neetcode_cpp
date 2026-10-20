#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({1,2,3});
        auto* a1=nc::tree({1,2,3});
        nc::eq(s.isSameTree(a0, a1),true);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({1,2});
        auto* a1=nc::tree({1,nullopt,2});
        nc::eq(s.isSameTree(a0, a1),false);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1,2,1});
        auto* a1=nc::tree({1,1,2});
        nc::eq(s.isSameTree(a0, a1),false);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({});
        auto* a1=nc::tree({});
        nc::eq(s.isSameTree(a0, a1),true);
    });
    nc::test("case 5", [] {
        Solution s;
        auto* a0=nc::tree({});
        auto* a1=nc::tree({0});
        nc::eq(s.isSameTree(a0, a1),false);
    });
    return nc::finish();
}
