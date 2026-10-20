#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {1,3};
        vector<int> a1 = {2};
        auto actual = s.findMedianSortedArrays(a0, a1);
        nc::near(actual, 2.0);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1,2};
        vector<int> a1 = {3,4};
        auto actual = s.findMedianSortedArrays(a0, a1);
        nc::near(actual, 2.5);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {};
        vector<int> a1 = {1};
        auto actual = s.findMedianSortedArrays(a0, a1);
        nc::near(actual, 1.0);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {2};
        vector<int> a1 = {};
        auto actual = s.findMedianSortedArrays(a0, a1);
        nc::near(actual, 2.0);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {0,0};
        vector<int> a1 = {0,0};
        auto actual = s.findMedianSortedArrays(a0, a1);
        nc::near(actual, 0.0);
    });
    nc::test("case 6", [] {
        Solution s;
        vector<int> a0 = {-5,-3};
        vector<int> a1 = {-2,-1};
        auto actual = s.findMedianSortedArrays(a0, a1);
        nc::near(actual, -2.5);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(4);for(int t=0;t<100;++t){vector<int>a(rng()%12),b(1+rng()%12);for(auto& v:a)v=int(rng()%100)-50;for(auto& v:b)v=int(rng()%100)-50;sort(a.begin(),a.end());sort(b.begin(),b.end());
            vector<int> all=a;all.insert(all.end(),b.begin(),b.end());sort(all.begin(),all.end());double expected=(all[(all.size()-1)/2]+all[all.size()/2])/2.0;Solution s;nc::near(s.findMedianSortedArrays(a,b),expected);}
    });
    return nc::finish();
}
