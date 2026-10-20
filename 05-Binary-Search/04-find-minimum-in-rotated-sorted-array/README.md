# Find Minimum in Rotated Sorted Array

| | |
|---|---|
| **LeetCode ID** | 153 |
| **Difficulty** | Medium |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/ |

## Problem

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. Given the sorted rotated array nums with unique elements, return the minimum element of this array. The algorithm must run in O(log n) time.

## Examples

**Example 1:**
```
Input: nums = [3,4,5,1,2]
Output: 1
```

**Example 2:**
```
Input: nums = [4,5,6,7,0,1,2]
Output: 0
```

**Example 3:**
```
Input: nums = [11,13,15,17]
Output: 11
```

## Constraints

- n == nums.length
- 1 <= n <= 5000
- -5000 <= nums[i] <= 5000
- All the integers of nums are unique.
- nums is sorted and rotated.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
