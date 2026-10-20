#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {0,1,0,2,1,0,1,3,2,1,2,1};
        auto actual = s.trap(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {4,2,0,3,2,5};
        auto actual = s.trap(a0);
        int expected = 9;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {0};
        auto actual = s.trap(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1,2,3};
        auto actual = s.trap(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {3,0,3};
        auto actual = s.trap(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(42);for(int t=0;t<100;++t){vector<int>a(1+rng()%20);for(auto& v:a)v=rng()%20;int expected=0;
            for(int i=0;i<int(a.size());++i){int l=*max_element(a.begin(),a.begin()+i+1),r=*max_element(a.begin()+i,a.end());expected+=min(l,r)-a[i];}Solution s;nc::eq(s.trap(a),expected);}
    });
    return nc::finish();
}
