# Word Ladder

| | |
|---|---|
| **LeetCode ID** | 127 |
| **Difficulty** | Hard |
| **Category** | Graphs |
| **LeetCode URL** | https://leetcode.com/problems/word-ladder/ |

## Problem

Given two words beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists. Each transformed word must exist in the word list, and each adjacent pair differs by exactly one letter.

## Examples

**Example 1:**
```
Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
```

**Example 2:**
```
Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
Output: 0
```

## Constraints

- 1 <= beginWord.length <= 10
- endWord.length == beginWord.length
- 1 <= wordList.length <= 5000
- wordList[i].length == beginWord.length
- beginWord, endWord, and wordList[i] consist of lowercase English letters.
- beginWord != endWord
- All the words in wordList are unique.

## Local practice

Edit `solution.cpp`, then run:

```sh
./test
```

Tests live in `tests/cases.cpp`. Reference answers in `misc/reference.hpp` contain spoilers.
These are independent local tests, not the platform’s private judge suite.
