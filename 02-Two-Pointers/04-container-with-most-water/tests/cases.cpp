#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,8,6,2,5,4,8,3,7};
        auto actual = s.maxArea(a0);
        int expected = 49;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1,1};
        auto actual = s.maxArea(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {4,3,2,1,4};
        auto actual = s.maxArea(a0);
        int expected = 16;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {0,0};
        auto actual = s.maxArea(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {1,2,1};
        auto actual = s.maxArea(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(11);for(int t=0;t<100;++t){vector<int>a(2+rng()%20);for(auto& v:a)v=rng()%30;int expected=0;
            for(int i=0;i<int(a.size());++i)for(int j=i+1;j<int(a.size());++j)expected=max(expected,(j-i)*min(a[i],a[j]));Solution s;nc::eq(s.maxArea(a),expected);}
    });
    return nc::finish();
}
