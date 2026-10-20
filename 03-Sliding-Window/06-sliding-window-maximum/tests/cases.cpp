#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,3,-1,-3,5,3,6,7};
        int a1 = 3;
        auto actual = s.maxSlidingWindow(a0, a1);
        vector<int> expected = {3,3,5,5,6,7};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1};
        int a1 = 1;
        auto actual = s.maxSlidingWindow(a0, a1);
        vector<int> expected = {1};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {4,3,2,1};
        int a1 = 2;
        auto actual = s.maxSlidingWindow(a0, a1);
        vector<int> expected = {4,3,2};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-2,-1};
        int a1 = 2;
        auto actual = s.maxSlidingWindow(a0, a1);
        vector<int> expected = {-1};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {1,2,3};
        int a1 = 1;
        auto actual = s.maxSlidingWindow(a0, a1);
        vector<int> expected = {1,2,3};
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(239);for(int t=0;t<100;++t){vector<int>a(1+rng()%30);for(auto& v:a)v=int(rng()%101)-50;int k=1+rng()%a.size();vector<int>expected;
            for(int i=0;i+k<=int(a.size());++i)expected.push_back(*max_element(a.begin()+i,a.begin()+i+k));Solution s;nc::eq(s.maxSlidingWindow(a,k),expected);}
    });
    return nc::finish();
}
