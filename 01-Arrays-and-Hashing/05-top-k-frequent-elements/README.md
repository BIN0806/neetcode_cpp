# Top K Frequent Elements

| | |
|---|---|
| **LeetCode ID** | 347 |
| **Difficulty** | Medium |
| **Category** | Arrays & Hashing |
| **LeetCode URL** | https://leetcode.com/problems/top-k-frequent-elements/ |

## Problem

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order. The solution should run in better than O(n log n) time.

## Examples

**Example 1:**
```
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
```

**Example 2:**
```
Input: nums = [1], k = 1
Output: [1]
```

## Constraints

- 1 <= nums.length <= 10^5
- -10^4 <= nums[i] <= 10^4
- k is in the range [1, the number of unique elements in the array]
- It is guaranteed that the answer is unique.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
