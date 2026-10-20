#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({3,1,4,nullopt,2});
        int a1=1;
        nc::eq(s.kthSmallest(a0, a1),1);
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({5,3,6,2,4,nullopt,nullopt,1});
        int a1=3;
        nc::eq(s.kthSmallest(a0, a1),3);
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1});
        int a1=1;
        nc::eq(s.kthSmallest(a0, a1),1);
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({2,1,3});
        int a1=3;
        nc::eq(s.kthSmallest(a0, a1),3);
    });
    return nc::finish();
}
