#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {2,1,5,6,2,3};
        auto actual = s.largestRectangleArea(a0);
        int expected = 10;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2,4};
        auto actual = s.largestRectangleArea(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {0};
        auto actual = s.largestRectangleArea(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2,2,2};
        auto actual = s.largestRectangleArea(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {4,3,2,1};
        auto actual = s.largestRectangleArea(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(84);for(int t=0;t<100;++t){vector<int>a(1+rng()%20);for(auto& v:a)v=rng()%20;int expected=0;
            for(int i=0;i<int(a.size());++i){int h=INT_MAX;for(int j=i;j<int(a.size());++j){h=min(h,a[j]);expected=max(expected,h*(j-i+1));}}Solution s;nc::eq(s.largestRectangleArea(a),expected);}
    });
    return nc::finish();
}
