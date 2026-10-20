#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; vector<string> words={"wrt","wrf","er","ett","rftt"}; nc::check(nc::alienOrder(s.alienOrder(words),words),"not a valid alphabet ordering");
    });
    nc::test("case 2", [] {
        Solution s; vector<string> words={"z","x"}; nc::check(nc::alienOrder(s.alienOrder(words),words),"not a valid alphabet ordering");
    });
    nc::test("case 3", [] {
        Solution s; vector<string> words={"abc"}; nc::check(nc::alienOrder(s.alienOrder(words),words),"not a valid alphabet ordering");
    });
    nc::test("case 4", [] {
        Solution s; vector<string> words={"ab","ab"}; nc::check(nc::alienOrder(s.alienOrder(words),words),"not a valid alphabet ordering");
    });
    nc::test("case 5", [] {
        Solution s; vector<string> words={"z","x","z"}; nc::eq(s.alienOrder(words),string(""));
    });
    nc::test("case 6", [] {
        Solution s; vector<string> words={"abc","ab"}; nc::eq(s.alienOrder(words),string(""));
    });
    return nc::finish();
}
