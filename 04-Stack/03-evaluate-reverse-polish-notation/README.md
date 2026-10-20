# Evaluate Reverse Polish Notation

| | |
|---|---|
| **LeetCode ID** | 150 |
| **Difficulty** | Medium |
| **Category** | Stack |
| **LeetCode URL** | https://leetcode.com/problems/evaluate-reverse-polish-notation/ |

## Problem

Evaluate the value of an arithmetic expression in Reverse Polish Notation. Valid operators are +, -, *, and /. Each operand may be an integer or another expression. Division between two integers truncates toward zero.

## Examples

**Example 1:**
```
Input: tokens = ["2","1","+","3","*"]
Output: 9
```

**Example 2:**
```
Input: tokens = ["4","13","5","/","+"]
Output: 6
```

**Example 3:**
```
Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
```

## Constraints

- 1 <= tokens.length <= 10^4
- tokens[i] is either an operator: "+", "-", "*", or "/", or an integer in the range [-200, 200].
- Division truncates toward zero.
- It is guaranteed the expression is valid.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
