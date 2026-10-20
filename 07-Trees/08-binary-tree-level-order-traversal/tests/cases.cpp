#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        auto* a0=nc::tree({3,9,20,nullopt,nullopt,15,7});
        nc::eq(s.levelOrder(a0),vector<vector<int>>{{3},{9,20},{15,7}});
    });
    nc::test("case 2", [] {
        Solution s;
        auto* a0=nc::tree({});
        nc::eq(s.levelOrder(a0),vector<vector<int>>{});
    });
    nc::test("case 3", [] {
        Solution s;
        auto* a0=nc::tree({1});
        nc::eq(s.levelOrder(a0),vector<vector<int>>{{1}});
    });
    nc::test("case 4", [] {
        Solution s;
        auto* a0=nc::tree({1,nullopt,2,3});
        nc::eq(s.levelOrder(a0),vector<vector<int>>{{1},{2},{3}});
    });
    return nc::finish();
}
