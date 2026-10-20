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
        auto actual = s.containsDuplicate(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        vector<int> a0 = {1,2,3,4};
        auto actual = s.containsDuplicate(a0);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        vector<int> a0 = {1};
        auto actual = s.containsDuplicate(a0);
        bool expected = false;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        vector<int> a0 = {-1,0,-1};
        auto actual = s.containsDuplicate(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        vector<int> a0 = {0,0};
        auto actual = s.containsDuplicate(a0);
        bool expected = true;
        nc::eq(actual, expected);
    });
    nc::test("seeded differential cases", [] {
        mt19937 rng(217); for(int trial=0;trial<150;++trial){
            vector<int> a(1+rng()%30); for(auto& v:a)v=int(rng()%41)-20;
            bool expected=set<int>(a.begin(),a.end()).size()!=a.size(); Solution s; nc::eq(s.containsDuplicate(a),expected);}
    });
    return nc::finish();
}
