# Binary Search

| | |
|---|---|
| **LeetCode ID** | 704 |
| **Difficulty** | Easy |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/binary-search/ |

## Problem

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, return its index. Otherwise, return -1. The algorithm must run in O(log n) time.

## Examples

**Example 1:**
```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
```

**Example 2:**
```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
```

## Constraints

- 1 <= nums.length <= 10^4
- -10^4 < nums[i], target < 10^4
- All the integers in nums are unique.
- nums is sorted in ascending order.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
