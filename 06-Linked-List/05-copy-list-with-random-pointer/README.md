# Copy List with Random Pointer

| | |
|---|---|
| **LeetCode ID** | 138 |
| **Difficulty** | Medium |
| **Category** | Linked List |
| **LeetCode URL** | https://leetcode.com/problems/copy-list-with-random-pointer/ |

## Problem

A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null. Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, each with the same value and same next and random pointer structure.

## Examples

**Example 1:**
```
Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
```

**Example 2:**
```
Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]
```

**Example 3:**
```
Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]
```

## Constraints

- 0 <= n <= 1000
- -10^4 <= Node.val <= 10^4
- Node.random is null or is pointing to some node in the linked list.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
