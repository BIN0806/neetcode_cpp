# Gas Station

| | |
|---|---|
| **LeetCode ID** | 134 |
| **Difficulty** | Medium |
| **Category** | Greedy |
| **LeetCode URL** | https://leetcode.com/problems/gas-station/ |

## Problem

There are n gas stations along a circular route. You have two integer arrays gas and cost. Return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1.

## Examples

**Example 1:**
```
Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3
Explanation: Start at station 3 (index 3) and fill up with 4 units of gas. Your tank = 0 + 4 = 4. Travel to station 4. Your tank = 4 - 1 + 5 = 8. Travel to station 0. Your tank = 8 - 2 + 1 = 7. Travel to station 1. Your tank = 7 - 3 + 2 = 6. Travel to station 2. Your tank = 6 - 4 + 3 = 5. Travel to station 3. The cost is 4. Your gas is just enough to travel back to station 3. Therefore, return 3 as the starting index.
```

**Example 2:**
```
Input: gas = [2,3,4], cost = [3,4,3]
Output: -1
Explanation: You can't start at station 0 or 1, as there is not enough gas to travel to the next station. We can't start at station 2 either, as your tank has to be full to start.
```

## Constraints

- n == gas.length == cost.length
- 1 <= n <= 10^5
- 0 <= gas[i], cost[i] <= 10^4

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
