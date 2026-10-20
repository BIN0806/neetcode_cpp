#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s;
        uint32_t a0 = 11u;
        auto actual = s.hammingWeight(a0);
        int expected = 3;
        nc::eq(actual, expected);
    });
    nc::test("case 2", [] {
        Solution s;
        uint32_t a0 = 128u;
        auto actual = s.hammingWeight(a0);
        int expected = 1;
        nc::eq(actual, expected);
    });
    nc::test("case 3", [] {
        Solution s;
        uint32_t a0 = 4294967293u;
        auto actual = s.hammingWeight(a0);
        int expected = 31;
        nc::eq(actual, expected);
    });
    nc::test("case 4", [] {
        Solution s;
        uint32_t a0 = 0u;
        auto actual = s.hammingWeight(a0);
        int expected = 0;
        nc::eq(actual, expected);
    });
    nc::test("case 5", [] {
        Solution s;
        uint32_t a0 = 4294967295u;
        auto actual = s.hammingWeight(a0);
        int expected = 32;
        nc::eq(actual, expected);
    });
    return nc::finish();
}
