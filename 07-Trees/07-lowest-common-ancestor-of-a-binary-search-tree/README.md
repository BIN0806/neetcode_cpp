# Lowest Common Ancestor of a Binary Search Tree

| | |
|---|---|
| **LeetCode ID** | 235 |
| **Difficulty** | Medium |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/ |

## Problem

Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the bst. The LCA is the lowest node that has both p and q as descendants (where a node can be a descendant of itself).

## Examples

**Example 1:**
```
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6.
```

**Example 2:**
```
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
Output: 2
Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself.
```

**Example 3:**
```
Input: root = [2,1], p = 2, q = 1
Output: 2
```

## Constraints

- The number of nodes in the tree is in the range [2, 10^5].
- -10^9 <= Node.val <= 10^9
- All Node.val are unique.
- p != q and p and q will exist in the BST.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
