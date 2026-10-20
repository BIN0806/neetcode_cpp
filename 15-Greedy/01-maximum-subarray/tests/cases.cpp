#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {-2,1,-3,4,-1,2,1,-5,4};
        auto actual = s.maxSubArray(a0);
        int expected = 6;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.maxSubArray(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {5,4,-1,7,8};
        auto actual = s.maxSubArray(a0);
        int expected = 23;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-3,-2,-5};
        auto actual = s.maxSubArray(a0);
        int expected = -2;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {0,0};
        auto actual = s.maxSubArray(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(53);for(int t=0;t<100;++t){vector<int>a(1+rng()%20);for(auto& v:a)v=int(rng()%41)-20;int expected=INT_MIN;
            for(size_t i=0;i<a.size();++i){int sum=0;for(size_t j=i;j<a.size();++j){sum+=a[j];expected=max(expected,sum);}}Solution s;nc::eq(s.maxSubArray(a),expected);}
    });
    return nc::finish();
}
