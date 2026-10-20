# Course Schedule

| | |
|---|---|
| **LeetCode ID** | 207 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/course-schedule/ |

## Problem

There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai. Return true if you can finish all courses. Otherwise, return false.

## Examples

**Example 1:**
```
Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
```

**Example 2:**
```
Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
```

## Constraints

- 1 <= numCourses <= 2000
- 0 <= prerequisites.length <= 5000
- prerequisites[i].length == 2
- 0 <= ai, bi < numCourses
- All the pairs prerequisites[i] are unique.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
