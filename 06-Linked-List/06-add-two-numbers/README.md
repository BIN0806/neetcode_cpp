# Add Two Numbers

| | |
|---|---|
| **LeetCode ID** | 2 |
| **Difficulty** | Medium |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/add-two-numbers/ |

## Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list in the same reversed order.

## Examples

**Example 1:**
```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
```

**Example 2:**
```
Input: l1 = [0], l2 = [0]
Output: [0]
```

**Example 3:**
```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```

## Constraints

- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
