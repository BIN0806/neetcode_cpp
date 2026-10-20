# Jump Game II

| | |
|---|---|
| **LeetCode ID** | 45 |
| **Difficulty** | Medium |
| **Category** | Greedy |
| **LeetCode URL** | https://leetcode.com/problems/jump-game-ii/ |

## Problem

You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0]. Each element nums[i] represents the maximum length of a forward jump from index i. Return the minimum number of jumps to reach the last index.

## Examples

**Example 1:**
```
Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
```

**Example 2:**
```
Input: nums = [2,3,0,1,4]
Output: 2
```

## Constraints

- 1 <= nums.length <= 10^4
- 0 <= nums[i] <= 1000

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
