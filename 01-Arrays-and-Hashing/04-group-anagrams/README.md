# Group Anagrams

| | |
|---|---|
| **LeetCode ID** | 49 |
| **Difficulty** | Medium |
| **Category** | Arrays & Hashing |
| **LeetCode URL** | https://leetcode.com/problems/group-anagrams/ |

## Problem

Given an array of strings strs, group the anagrams together. You can return the answer in any order. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

## Examples

**Example 1:**
```
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
```

**Example 2:**
```
Input: strs = [""]
Output: [[""]]
```

**Example 3:**
```
Input: strs = ["a"]
Output: [["a"]]
```

## Constraints

- 1 <= strs.length <= 10^4
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
