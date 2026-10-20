#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        vector<int> a0 = {2,7,11,15};
        int a1 = 9;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {0,1};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {3,2,4};
        int a1 = 6;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {1,2};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {3,3};
        int a1 = 6;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {0,1};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-3,4,3,90};
        int a1 = 0;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {0,2};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {0,4,3,0};
        int a1 = 0;
        auto actual = s.twoSum(a0, a1);
        vector<int> expected = {0,3};
        nc::eq(nc::sorted(actual), nc::sorted(expected));
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(1); for(int trial=0;trial<100;++trial){
            vector<int> a(2+rng()%20); iota(a.begin(),a.end(),1); shuffle(a.begin(),a.end(),rng);
            // Construct a target with exactly one pair; reject ambiguous targets.
            int target=a[0]+a[1], pairs=0; for(size_t i=0;i<a.size();++i)for(size_t j=i+1;j<a.size();++j) pairs+=a[i]+a[j]==target;
            if(pairs!=1)continue; Solution s; auto out=s.twoSum(a,target); nc::eq(out.size(),size_t(2));
            nc::check(out[0]>=0 && out[1]>=0 && size_t(out[0])<a.size() && size_t(out[1])<a.size() && out[0]!=out[1]); nc::eq(a[out[0]]+a[out[1]],target);}
    });
    return nc::finish();
}
