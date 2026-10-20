#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {7,1,5,3,6,4};
        auto actual = s.maxProfit(a0);
        int expected = 5;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {7,6,4,3,1};
        auto actual = s.maxProfit(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.maxProfit(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2,4,1};
        auto actual = s.maxProfit(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {1,1,1};
        auto actual = s.maxProfit(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(121);for(int t=0;t<100;++t){vector<int>a(1+rng()%20);for(auto& v:a)v=rng()%100;int expected=0;
            for(size_t i=0;i<a.size();++i)for(size_t j=i+1;j<a.size();++j)expected=max(expected,a[j]-a[i]);Solution s;nc::eq(s.maxProfit(a),expected);}
    });
    return nc::finish();
}
