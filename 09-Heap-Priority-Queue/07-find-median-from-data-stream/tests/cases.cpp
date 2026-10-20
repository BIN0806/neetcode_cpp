#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        MedianFinder s; s.addNum(1); s.addNum(2); nc::near(s.findMedian(),1.5); s.addNum(3); nc::near(s.findMedian(),2.0);
    });
    nc::test("case 2", [] {
        MedianFinder s; for(int i=1;i<=20;++i){s.addNum(-i); nc::near(s.findMedian(),-(i+1)/2.0);}
    });
    nc::test("case 3", [] {
        MedianFinder s; s.addNum(0); s.addNum(0); s.addNum(0); nc::near(s.findMedian(),0.0);
    });
    return nc::finish();
}
