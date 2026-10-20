# K Closest Points to Origin

| | |
|---|---|
| **LeetCode ID** | 973 |
| **Difficulty** | Medium |
| **Category** | Heap / Priority Queue |
| **LeetCode URL** | https://leetcode.com/problems/k-closest-points-to-origin/ |

## Problem

Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0). The distance between two points on the X-Y plane is the Euclidean distance.

## Examples

**Example 1:**
```
Input: points = [[1,3],[-2,2]], k = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
```

**Example 2:**
```
Input: points = [[3,3],[5,-1],[-2,4]], k = 2
Output: [[3,3],[-2,4]]
Explanation: The answer [[-2,4],[3,3]] would also be accepted.
```

## Constraints

- 1 <= k <= points.length <= 10^4
- -10^4 <= xi, yi <= 10^4
- All the points are unique.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
