# Invert Binary Tree

| | |
|---|---|
| **LeetCode ID** | 226 |
| **Difficulty** | Easy |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/invert-binary-tree/ |

## Problem

Given the root of a binary tree, invert the tree, and return its root. Inverting means swapping the left and right subtrees of every node in the tree.

## Examples

**Example 1:**
```
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
```

**Example 2:**
```
Input: root = [2,1,3]
Output: [2,3,1]
```

**Example 3:**
```
Input: root = []
Output: []
```

## Constraints

- The number of nodes in the tree is in the range [0, 100].
- -100 <= Node.val <= 100

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
