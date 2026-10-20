#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; vector<vector<int>> rows={{1,4,5},{1,3,4},{2,6}}; vector<ListNode*> a; for(auto& row:rows) a.push_back(nc::linked(row)); nc::eq(nc::values(s.mergeKLists(a)),vector<int>{1,1,2,3,4,4,5,6});
    });
    nc::test("case 2", [] {
        Solution s; vector<vector<int>> rows={}; vector<ListNode*> a; for(auto& row:rows) a.push_back(nc::linked(row)); nc::eq(nc::values(s.mergeKLists(a)),vector<int>{});
    });
    nc::test("case 3", [] {
        Solution s; vector<vector<int>> rows={{}}; vector<ListNode*> a; for(auto& row:rows) a.push_back(nc::linked(row)); nc::eq(nc::values(s.mergeKLists(a)),vector<int>{});
    });
    nc::test("case 4", [] {
        Solution s; vector<vector<int>> rows={{-2,-1},{},{0,2}}; vector<ListNode*> a; for(auto& row:rows) a.push_back(nc::linked(row)); nc::eq(nc::values(s.mergeKLists(a)),vector<int>{-2,-1,0,2});
    });
    return nc::finish();
}
