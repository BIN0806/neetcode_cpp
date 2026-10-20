# Car Fleet

| | |
|---|---|
| **LeetCode ID** | 853 |
| **Difficulty** | Medium |
| **Category** | Stack |
| **LeetCode URL** | https://leetcode.com/problems/car-fleet/ |

## Problem

There are n cars going to the same destination along a one-lane road. The destination is target miles away. Each car i travels at a constant speed and starts at a given position. A car can never pass another car, but it can catch up and form a fleet traveling at the slower car's speed. Return the number of car fleets that will arrive at the destination.

## Examples

**Example 1:**
```
Input: target = 12, position = [10,8,0,5,3], speed = [2,4,1,1,3]
Output: 3
```

**Example 2:**
```
Input: target = 10, position = [3], speed = [3]
Output: 1
```

**Example 3:**
```
Input: target = 100, position = [0,2,4], speed = [4,2,1]
Output: 1
```

## Constraints

- n == position.length == speed.length
- 1 <= n <= 10^5
- 0 < target <= 10^6
- 0 < speed[i] <= 100
- 0 <= position[i] < target
- All the values of position are unique.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
