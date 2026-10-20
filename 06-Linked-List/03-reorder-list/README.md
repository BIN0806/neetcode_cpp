# Reorder List

| | |
|---|---|
| **LeetCode ID** | 143 |
| **Difficulty** | Medium |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/reorder-list/ |

## Problem

You are given the head of a singly linked-list. Reorder the list so that nodes follow the order L0, Ln, L1, Ln-1, L2, Ln-2, ... You may not modify the values in the list's nodes; only nodes themselves may be changed.

## Examples

**Example 1:**
```
Input: head = [1,2,3,4]
Output: [1,4,2,3]
```

**Example 2:**
```
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
```

## Constraints

- The number of nodes in the list is in the range [1, 5 * 10^4].
- 1 <= Node.val <= 1000

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
