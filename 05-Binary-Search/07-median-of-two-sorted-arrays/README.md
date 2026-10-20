# Median of Two Sorted Arrays

| | |
|---|---|
| **LeetCode ID** | 4 |
| **Difficulty** | Hard |
| **Category** | Binary Search |
| **LeetCode URL** | https://leetcode.com/problems/median-of-two-sorted-arrays/ |

## Problem

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

## Examples

**Example 1:**
```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
```

**Example 2:**
```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
```

## Constraints

- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -10^6 <= nums1[i], nums2[i] <= 10^6

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
