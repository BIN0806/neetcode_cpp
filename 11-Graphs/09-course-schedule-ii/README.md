# Course Schedule II

| | |
|---|---|
| **LeetCode ID** | 210 |
| **Difficulty** | Medium |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/course-schedule-ii/ |

## Problem

There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai. Return the ordering of courses you should take to finish all courses. If there are many valid answers, return any of them. If it is impossible to finish all courses, return an empty array.

## Examples

**Example 1:**
```
Input: numCourses = 2, prerequisites = [[1,0]]
Output: [0,1]
```

**Example 2:**
```
Input: numCourses = 4, prerequisites = [[1,0],[2,0],[3,1],[3,2]]
Output: [0,2,1,3]
```

**Example 3:**
```
Input: numCourses = 1, prerequisites = []
Output: [0]
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
