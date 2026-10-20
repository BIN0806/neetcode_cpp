# Linked List Cycle

| | |
|---|---|
| **LeetCode ID** | 141 |
| **Difficulty** | Easy |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/linked-list-cycle/ |

## Problem

Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.

## Examples

**Example 1:**
```
Input: head = [3,2,0,-4], pos = 1
Output: true
```

**Example 2:**
```
Input: head = [1,2], pos = 0
Output: true
```

**Example 3:**
```
Input: head = [1], pos = -1
Output: false
```

## Constraints

- The number of the nodes in the list is in the range [0, 10^4].
- -10^5 <= Node.val <= 10^5
- pos is -1 or a valid index in the linked-list.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
