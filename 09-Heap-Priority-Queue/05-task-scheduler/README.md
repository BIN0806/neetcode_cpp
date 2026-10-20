# Task Scheduler

| | |
|---|---|
| **LeetCode ID** | 621 |
| **Difficulty** | Medium |
| **Category** | Heap / Priority Queue |
| **LeetCode URL** | https://leetcode.com/problems/task-scheduler/ |

## Problem

Given a characters array tasks, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle. However, there is a non-negative integer n that represents the cooldown period between two same tasks. Return the least number of units of time the CPU will take to finish all the given tasks.

## Examples

**Example 1:**
```
Input: tasks = ["A","A","A","B","B","B"], n = 2
Output: 8
Explanation:
A -> B -> idle -> A -> B -> idle -> A -> B
There is at least 2 units of time between any two same tasks.
```

**Example 2:**
```
Input: tasks = ["A","A","A","B","B","B"], n = 0
Output: 6
```

**Example 3:**
```
Input: tasks = ["A","A","A","A","A","A","B","C","D","E","F","G"], n = 2
Output: 16
```

## Constraints

- 1 <= task.length <= 10^4
- tasks[i] is upper-case English letter.
- 0 <= n <= 100

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
