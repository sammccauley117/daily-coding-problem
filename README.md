# Daily Coding Problems
## Problem 1
**Name**: String to Integer (atoi)<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**Python Score**: 40ms (94th percentile)<br>
**C++ Score**: 8ms (89th percentile)<br>

Implement `atoi` which converts a string to an integer. The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value. The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function. If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed. If no valid conversion could be performed, a zero value is returned. Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. If the numerical value is out of the range of representable values, INT_MAX (2^31 − 1) or INT_MIN (−2^31) is returned.

## Problem 2
**Name**: Two Sum<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 32ms (83rd percentile)<br>
**C++ Score**: 8ms (98th percentile)<br>

Given an array of integers, return indices of the two numbers such that they add up to a specific target. You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Problem 3
**Name**: Compare Version Numbers<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**C++ Score**: 0ms (100th percentile)<br>

Compare two version numbers *version1* and *version2*.
If version1 > version2 `return 1;` if version1 < version2 `return -1;` otherwise `return 0;`. You may assume that the version strings are non-empty and contain only digits and the `.` character. The `.` character does not represent a decimal point and is used to separate number sequences. For instance, `2.5` is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision. You may assume the default revision number for each level of a version number to be `0`. For example, version number `3.4` has a revision number of `3` and `4` for its first and second level revision number. Its third and fourth level revision number are both `0`.
