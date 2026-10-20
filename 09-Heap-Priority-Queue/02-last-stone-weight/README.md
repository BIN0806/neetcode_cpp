# Last Stone Weight

| | |
|---|---|
| **LeetCode ID** | 1046 |
| **Difficulty** | Easy |
| **Category** | Heap / Priority Queue |
| **LeetCode URL** | https://leetcode.com/problems/last-stone-weight/ |

## Problem

You are given an array of integers stones where stones[i] is the weight of the ith stone. On each turn, we choose the two heaviest stones and smash them together. If they are equal, both are destroyed; if not, the smaller is destroyed and the larger has new weight equal to the difference. Return the weight of the last remaining stone, or 0 if none.

## Examples

**Example 1:**
```
Input: stones = [2,7,4,1,8,1]
Output: 1
Explanation:
We combine 7 and 8 to get 1, so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2, so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1, so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0, so the array converts to [1], then that's the value of the last stone.
```

**Example 2:**
```
Input: stones = [1]
Output: 1
```

## Constraints

- 1 <= stones.length <= 30
- 1 <= stones[i] <= 1000

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
