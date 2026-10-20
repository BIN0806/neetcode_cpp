# Merge k Sorted Lists

| | |
|---|---|
| **LeetCode ID** | 23 |
| **Difficulty** | Hard |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/merge-k-sorted-lists/ |

## Problem

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order. Merge all the linked-lists into one sorted linked-list and return it.

## Examples

**Example 1:**
```
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
```

**Example 2:**
```
Input: lists = []
Output: []
```

**Example 3:**
```
Input: lists = [[]]
Output: []
```

## Constraints

- k == lists.length
- 0 <= k <= 10^4
- 0 <= lists[i].length <= 500
- -10^4 <= lists[i][j] <= 10^4
- lists[i] is sorted in ascending order.
- The sum of lists[i].length will not exceed 10^4.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
