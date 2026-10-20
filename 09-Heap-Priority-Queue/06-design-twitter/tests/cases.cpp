#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Twitter s; nc::eq(s.getNewsFeed(1),vector<int>{}); s.postTweet(1,5); nc::eq(s.getNewsFeed(1),vector<int>{5}); s.follow(1,2); s.postTweet(2,6); nc::eq(s.getNewsFeed(1),vector<int>({6,5})); s.unfollow(1,2); nc::eq(s.getNewsFeed(1),vector<int>{5});
    });
    nc::test("case 2", [] {
        Twitter s; for(int i=1;i<=12;++i) s.postTweet(1,i); nc::eq(s.getNewsFeed(1),vector<int>({12,11,10,9,8,7,6,5,4,3})); s.follow(2,1); s.follow(2,1); nc::eq(s.getNewsFeed(2),s.getNewsFeed(1)); s.unfollow(2,1); nc::eq(s.getNewsFeed(2),vector<int>{});
    });
    return nc::finish();
}
