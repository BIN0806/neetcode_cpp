#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {3,0,1};
        auto actual = s.missingNumber(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {0,1};
        auto actual = s.missingNumber(a0);
        int expected = 2;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {9,6,4,2,3,5,7,0,1};
        auto actual = s.missingNumber(a0);
        int expected = 8;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.missingNumber(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {0};
        auto actual = s.missingNumber(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(268);for(int n=1;n<=100;++n){int missing=rng()%(n+1);vector<int>a;for(int i=0;i<=n;++i)if(i!=missing)a.push_back(i);shuffle(a.begin(),a.end(),rng);Solution s;nc::eq(s.missingNumber(a),missing);}
    });
    return nc::finish();
}
