# Search in Rotated Sorted Array

| | |
|---|---|
| **LeetCode ID** | 33 |
| **Difficulty** | Medium |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/search-in-rotated-sorted-array/ |

## Problem

There is an integer array nums sorted in ascending order with distinct values that has been rotated. Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not. The algorithm must run in O(log n) time.

## Examples

**Example 1:**
```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```

**Example 2:**
```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

**Example 3:**
```
Input: nums = [1], target = 0
Output: -1
```

## Constraints

- 1 <= nums.length <= 5000
- -10^4 <= nums[i] <= 10^4
- All values of nums are unique.
- nums is sorted and rotated.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
