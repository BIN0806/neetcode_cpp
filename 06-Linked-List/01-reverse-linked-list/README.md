# Reverse Linked List

| | |
|---|---|
| **LeetCode ID** | 206 |
| **Difficulty** | Easy |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/reverse-linked-list/ |

## Problem

Given the head of a singly linked list, reverse the list, and return the reversed list. The nodes' next pointers should be rearranged so that the last node becomes the first and vice versa.

## Examples

**Example 1:**
```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```

**Example 2:**
```
Input: head = [1,2]
Output: [2,1]
```

**Example 3:**
```
Input: head = []
Output: []
```

## Constraints

- The number of nodes in the list is in the range [0, 5000].
- -5000 <= Node.val <= 5000

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
