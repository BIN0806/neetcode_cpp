#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3,1};
        auto actual = s.rob(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {2,7,9,3,1};
        auto actual = s.rob(a0);
        int expected = 12;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {0};
        auto actual = s.rob(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2,1,1,2};
        auto actual = s.rob(a0);
        int expected = 4;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {5};
        auto actual = s.rob(a0);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(198);for(int t=0;t<100;++t){vector<int>a(1+rng()%10);for(auto& v:a)v=rng()%30;int expected=0;
            for(unsigned mask=0;mask<(1u<<a.size());++mask){if(mask&(mask<<1))continue;int sum=0;for(size_t i=0;i<a.size();++i)if(mask&(1u<<i))sum+=a[i];expected=max(expected,sum);}Solution s;nc::eq(s.rob(a),expected);}
    });
    return nc::finish();
}
