# Min Stack

| | |
|---|---|
| **LeetCode ID** | 155 |
| **Difficulty** | Medium |
| **Category** | Stack |
| **LeetCode URL** | https://leetcode.com/problems/min-stack/ |

## Problem

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time. Implement the MinStack class with push(int val), pop(), top(), and getMin() methods. Each operation must run in O(1) time complexity.

## Examples

**Example 1:**
```
Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]
Output
[null,null,null,null,-3,null,0,-2]
```

## Constraints

- -2^31 <= val <= 2^31 - 1
- Methods pop, top and getMin operations will always be called on non-empty stacks.
- At most 3 * 10^4 calls will be made to push, pop, top, and getMin.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
