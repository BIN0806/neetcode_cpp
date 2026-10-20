# Subsets

| | |
|---|---|
| **LeetCode ID** | 78 |
| **Difficulty** | Medium |
| **Category** | Backtracking |
| **LeetCode URL** | https://leetcode.com/problems/subsets/ |

## Problem

Given an integer array nums of unique elements, return all possible subsets (the power set). The solution set must not contain duplicate subsets. Return the answer in any order.

## Examples

**Example 1:**
```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
```

**Example 2:**
```
Input: nums = [0]
Output: [[],[0]]
```

## Constraints

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
