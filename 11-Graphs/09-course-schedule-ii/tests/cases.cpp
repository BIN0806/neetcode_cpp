#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; vector<vector<int>> e={{1,0}}; nc::check(nc::courseOrder(s.findOrder(2,e),2,e),"not a valid course ordering");
    });
    nc::test("case 2", [] {
        Solution s; vector<vector<int>> e={{1,0},{2,0},{3,1},{3,2}}; nc::check(nc::courseOrder(s.findOrder(4,e),4,e),"not a valid course ordering");
    });
    nc::test("case 3", [] {
        Solution s; vector<vector<int>> e={}; nc::check(nc::courseOrder(s.findOrder(1,e),1,e),"not a valid course ordering");
    });
    nc::test("case 4", [] {
        Solution s; vector<vector<int>> e={}; nc::check(nc::courseOrder(s.findOrder(3,e),3,e),"not a valid course ordering");
    });
    nc::test("case 5", [] {
        Solution s; vector<vector<int>> e={{1,0},{0,1}}; nc::eq(s.findOrder(2,e),vector<int>{});
    });
    return nc::finish();
}
