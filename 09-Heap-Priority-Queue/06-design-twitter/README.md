# Design Twitter

| | |
|---|---|
| **LeetCode ID** | 355 |
| **Difficulty** | Medium |
| **Category** | Heap / Priority Queue |
| **LeetCode URL** | https://leetcode.com/problems/design-twitter/ |

## Problem

Design a simplified version of Twitter where users can post tweets, follow/unfollow another user, and see the 10 most recent tweets in the user's news feed. Tweets should be ordered from most recent to least recent.

## Examples

**Example 1:**
```
Input
["Twitter", "postTweet", "getNewsFeed", "follow", "postTweet", "getNewsFeed", "unfollow", "getNewsFeed"]
[[], [1, 5], [1], [1, 2], [2, 6], [1], [1, 2], [1]]
Output
[null, null, [5], null, null, [6, 5], null, [5]]

Explanation
Twitter twitter = new Twitter();
twitter.postTweet(1, 5); // User 1 posts a new tweet (id = 5).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -> [5].
twitter.follow(1, 2);    // User 1 follows user 2.
twitter.postTweet(2, 6); // User 2 posts a new tweet (id = 6).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 2 tweet ids -> [6, 5].
twitter.unfollow(1, 2);  // User 1 unfollows user 2.
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -> [5].
```

## Constraints

- 1 <= userId, followerId, followeeId <= 500
- 0 <= tweetId <= 10^4
- All the tweets are unique.
- At most 3 * 10^4 calls will be made to postTweet, getNewsFeed, follow, and unfollow.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
