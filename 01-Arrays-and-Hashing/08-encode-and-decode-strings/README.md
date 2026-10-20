# Encode and Decode Strings

| | |
|---|---|
| **LeetCode ID** | 271 |
| **Difficulty** | Medium |
| **Category** | Arrays & Hashing |
| **LeetCode URL** | https://leetcode.com/problems/encode-and-decode-strings/ |

## Problem

Design an algorithm to encode a list of strings to a string. The encoded string is then sent over the network and decoded back to the original list of strings. Please implement encode and decode methods.

## Examples

**Example 1:**
```
Input: ["Hello","World"]
Output: ["Hello","World"]
Explanation: Machine 1 encodes the list to a string "5#Hello5#World" and sends it. Machine 2 decodes it back to ["Hello","World"].
```

**Example 2:**
```
Input: [""]
Output: [""]
```

## Constraints

- 0 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] contains any possible characters out of 256 valid ASCII characters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
