# Partition Equal Subset Sum

| | |
|---|---|
| **LeetCode ID** | 416 |
| **Difficulty** | Medium |
| **Category** | 1-D Dynamic Programming |
| **LeetCode URL** | https://leetcode.com/problems/partition-equal-subset-sum/ |

## Problem

Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal, or false otherwise.

## Examples

**Example 1:**
```
Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
```

**Example 2:**
```
Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
```

## Constraints

- 1 <= nums.length <= 200
- 1 <= nums[i] <= 100

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
