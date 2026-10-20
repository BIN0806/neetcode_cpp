# Detect Squares

| | |
|---|---|
| **LeetCode ID** | 2013 |
| **Difficulty** | Medium |
| **Category** | Math & Geometry |
| **LeetCode URL** | https://leetcode.com/problems/detect-squares/ |

## Problem

You are given a stream of points on the X-Y plane. Design a data structure that can add points and count the number of squares with a given point as one corner and positive area.

## Examples

**Example 1:**
```
Input:
["DetectSquares", "add", "add", "add", "count", "add", "count"]
[[], [[3, 10]], [[11, 2]], [[3, 2]], [[11, 10]], [[11, 2]], [[11, 10]]]
Output: [null, null, null, null, 1, null, 2]
```

## Constraints

- point.length == 2
- 0 <= x, y <= 1000
- At most 3000 calls will be made to add and count.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
