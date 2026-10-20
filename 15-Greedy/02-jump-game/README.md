# Jump Game

| | |
|---|---|
| **LeetCode ID** | 55 |
| **Difficulty** | Medium |
| **Category** | Greedy |
| **LeetCode URL** | https://leetcode.com/problems/jump-game/ |

## Problem

You are given an integer array nums. You are initially positioned at the array's first index, and each element represents your maximum jump length at that position. Return true if you can reach the last index, or false otherwise.

## Examples

**Example 1:**
```
Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
```

**Example 2:**
```
Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
```

## Constraints

- 1 <= nums.length <= 10^4
- 0 <= nums[i] <= 10^5

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
