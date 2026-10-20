# Kth Largest Element in an Array

| | |
|---|---|
| **LeetCode ID** | 215 |
| **Difficulty** | Medium |
| **Category** | Heap / Priority Queue |
| **LeetCode URL** | https://leetcode.com/problems/kth-largest-element-in-an-array/ |

## Problem

Given an integer array nums and an integer k, return the kth largest element in the array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

## Examples

**Example 1:**
```
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
```

**Example 2:**
```
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
```

## Constraints

- 1 <= k <= nums.length <= 10^5
- -10^4 <= nums[i] <= 10^4

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
