#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {3,2,1,5,6,4};
        int a1 = 2;
        auto actual = s.findKthLargest(a0, a1);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {3,2,3,1,2,4,5,5,6};
        int a1 = 4;
        auto actual = s.findKthLargest(a0, a1);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        int a1 = 1;
        auto actual = s.findKthLargest(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-1,-1};
        int a1 = 2;
        auto actual = s.findKthLargest(a0, a1);
        int expected = -1;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {5,4,3,2,1};
        int a1 = 5;
        auto actual = s.findKthLargest(a0, a1);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(215);for(int t=0;t<100;++t){vector<int>a(1+rng()%30);for(auto& v:a)v=int(rng()%101)-50;int k=1+rng()%a.size();auto sorted=a;sort(sorted.begin(),sorted.end(),greater<int>());Solution s;nc::eq(s.findKthLargest(a,k),sorted[k-1]);}
    });
    return nc::finish();
}
