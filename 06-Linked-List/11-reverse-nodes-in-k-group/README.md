# Reverse Nodes in k-Group

| | |
|---|---|
| **LeetCode ID** | 25 |
| **Difficulty** | Hard |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/reverse-nodes-in-k-group/ |

## Problem

Given the head of a linked list, reverse the nodes of the list k at a time and return the modified list. k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k, the last remaining nodes should stay as-is. You may not alter the values in the list's nodes; only nodes themselves may be changed.

## Examples

**Example 1:**
```
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
```

**Example 2:**
```
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
```

## Constraints

- The number of nodes in the list is n.
- 1 <= k <= n <= 5000
- 0 <= Node.val <= 1000

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
