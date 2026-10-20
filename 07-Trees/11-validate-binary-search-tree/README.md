# Validate Binary Search Tree

| | |
|---|---|
| **LeetCode ID** | 98 |
| **Difficulty** | Medium |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/validate-binary-search-tree/ |

## Problem

Given the root of a binary tree, determine if it is a valid binary search tree (BST). A valid BST is defined as follows: the left subtree of a node contains only nodes with keys less than the node's key, and the right subtree contains only nodes with keys greater than the node's key.

## Examples

**Example 1:**
```
Input: root = [2,1,3]
Output: true
```

**Example 2:**
```
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 3.
```

## Constraints

- The number of nodes in the tree is in the range [1, 10^4].
- -2^31 <= Node.val <= 2^31 - 1

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
