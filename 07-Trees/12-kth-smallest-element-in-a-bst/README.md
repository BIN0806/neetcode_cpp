# Kth Smallest Element in a BST

| | |
|---|---|
| **LeetCode ID** | 230 |
| **Difficulty** | Medium |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/kth-smallest-element-in-a-bst/ |

## Problem

Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) among all the values of the nodes in the tree.

## Examples

**Example 1:**
```
Input: root = [3,1,4,null,2], k = 1
Output: 1
```

**Example 2:**
```
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3
```

## Constraints

- The number of nodes in the tree is in the range [1, 10^4].
- 0 <= Node.val <= 10^4
- 1 <= k <= n

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
