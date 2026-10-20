# Serialize and Deserialize Binary Tree

| | |
|---|---|
| **LeetCode ID** | 297 |
| **Difficulty** | Hard |
| **Category** | Trees |
| **LeetCode URL** | https://leetcode.com/problems/serialize-and-deserialize-binary-tree/ |

## Problem

Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored or transmitted. Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work.

## Examples

**Example 1:**
```
Input: root = [1,2,3,null,null,4,5]
Output: [1,2,3,null,null,4,5]
```

**Example 2:**
```
Input: root = []
Output: []
```

**Example 3:**
```
Input: root = [1]
Output: [1]
```

## Constraints

- The number of nodes in the tree is in the range [0, 10^4].
- -1000 <= Node.val <= 1000
- The input tree is guaranteed to be a binary tree.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
