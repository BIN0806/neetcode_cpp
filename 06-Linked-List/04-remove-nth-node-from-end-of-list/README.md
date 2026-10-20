# Remove Nth Node From End of List

| | |
|---|---|
| **LeetCode ID** | 19 |
| **Difficulty** | Medium |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/remove-nth-node-from-end-of-list/ |

## Problem

Given the head of a linked list, remove the nth node from the end of the list and return its head. The solution should achieve this in one pass.

## Examples

**Example 1:**
```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
```

**Example 2:**
```
Input: head = [1], n = 1
Output: []
```

**Example 3:**
```
Input: head = [1,2], n = 1
Output: [1]
```

## Constraints

- The number of nodes in the list is sz.
- 1 <= sz <= 30
- 0 <= Node.val <= 100
- 1 <= n <= sz

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
