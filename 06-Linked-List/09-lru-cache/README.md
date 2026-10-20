# LRU Cache

| | |
|---|---|
| **LeetCode ID** | 146 |
| **Difficulty** | Medium |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/lru-cache/ |

## Problem

Design a data structure that follows the constraints of a Least Recently Used (LRU) cache. Implement the LRUCache class with get(key) returning the value if the key exists, otherwise -1, and put(key, value) updating or inserting the value. When the cache reaches its capacity, evict the least recently used key.

## Examples

**Example 1:**
```
Input
["LRUCache","put","put","get","put","get","put","get","get","get"]
[[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]
Output
[null,null,null,1,null,-1,null,-1,3,4]
```

## Constraints

- 1 <= capacity <= 3000
- 0 <= key <= 10^4
- 0 <= value <= 10^5
- At most 2 * 10^5 calls will be made to get and put.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
