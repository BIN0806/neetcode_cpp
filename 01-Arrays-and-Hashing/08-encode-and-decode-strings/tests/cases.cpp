#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Codec s; vector<string> input={}; nc::eq(s.decode(s.encode(input)),input);
    });
    nc::test("case 2", [] {
        Codec s; vector<string> input={""}; nc::eq(s.decode(s.encode(input)),input);
    });
    nc::test("case 3", [] {
        Codec s; vector<string> input={"lint","code","love","you"}; nc::eq(s.decode(s.encode(input)),input);
    });
    nc::test("case 4", [] {
        Codec s; vector<string> input={"#", "12#abc", "", "hello world", "a\nb"}; nc::eq(s.decode(s.encode(input)),input);
    });
    nc::test("case 5", [] {
        Codec s; vector<string> input={"", "", ""}; nc::eq(s.decode(s.encode(input)),input);
    });
    return nc::finish();
}
