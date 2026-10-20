# Binary Tree Right Side View

| | |
|---|---|
| **LeetCode ID** | 199 |
| **Difficulty** | Medium |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/binary-tree-right-side-view/ |

## Problem

Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

## Examples

**Example 1:**
```
Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]
```

**Example 2:**
```
Input: root = [1,null,3]
Output: [1,3]
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
