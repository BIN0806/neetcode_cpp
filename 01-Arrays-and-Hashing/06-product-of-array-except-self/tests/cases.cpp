#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,2,3,4};
        auto actual = s.productExceptSelf(a0);
        vector<int> expected = {24,12,8,6};
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {-1,1,0,-3,3};
        auto actual = s.productExceptSelf(a0);
        vector<int> expected = {0,0,9,0,0};
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {0,0};
        auto actual = s.productExceptSelf(a0);
        vector<int> expected = {0,0};
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-1,-2,-3};
        auto actual = s.productExceptSelf(a0);
        vector<int> expected = {6,3,2};
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {2,3};
        auto actual = s.productExceptSelf(a0);
        vector<int> expected = {3,2};
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(238); for(int t=0;t<100;++t){ vector<int>a(2+rng()%7);for(auto& v:a)v=int(rng()%7)-3;
            vector<int> expected(a.size(),1);for(size_t i=0;i<a.size();++i)for(size_t j=0;j<a.size();++j)if(i!=j)expected[i]*=a[j]; Solution s;nc::eq(s.productExceptSelf(a),expected);}
    });
    return nc::finish();
}
