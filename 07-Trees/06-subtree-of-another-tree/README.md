# Subtree of Another Tree

| | |
|---|---|
| **LeetCode ID** | 572 |
| **Difficulty** | Easy |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/subtree-of-another-tree/ |

## Problem

Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise. A subtree of a binary tree is a tree that consists of a node in tree and all of this node's descendants.

## Examples

**Example 1:**
```
Input: root = [3,4,5,1,2], subRoot = [4,1,2]
Output: true
```

**Example 2:**
```
Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
Output: false
```

## Constraints

- The number of nodes in the root tree is in the range [1, 2000].
- The number of nodes in the subRoot tree is in the range [1, 1000].
- -10^4 <= root.val <= 10^4
- -10^4 <= subRoot.val <= 10^4

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
