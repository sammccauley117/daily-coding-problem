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

## Problem 4
**Name**: Roman to Integer<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 48ms (99th percentile)<br>
**C++ Score**: 12ms (95th percentile)<br>

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`. For example, two is written as `II` in Roman numeral, just two one's added together. Twelve is written as, `XII`, which is simply `X` + `II`. The number twenty seven is written as `XXVII`, which is `XX` + `V` + `II`. Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:
- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

## Problem 5
**Name**: Merge k Sorted Lists<br>
**Difficulty**: Hard<br>
**Source**: LeetCode<br>
**Python Score**: 72ms (93rd percentile)<br>

Merge k sorted linked lists and return it as one sorted list.

## Problem 6
**Name**: Reverse Integer<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 28ms (99th percentile)<br>

Given a 32-bit signed integer, reverse digits of an integer. Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

## Problem 7
**Name**: Palindrome Number<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 64ms (95th percentile)<br>

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

## Problem 8
**Name**: Remove Nth Node From End of List<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**C++ Score**: 0ms (100th percentile)<br>

Given a linked list, remove the n-th node from the end of list and return its head.

## Problem 9
**Name**: Sort Colors<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**Python Score**: 36ms (90th percentile)<br>

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue. Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively. Note: You are not suppose to use the library's sort function for this problem.

## Problem 10
**Name**: Majority Element<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 44ms (95th percentile)<br>

Given an array of size *n*, find the majority element. The majority element is the element that appears more than ⌊n/2⌋ times. You may assume that the array is non-empty and the majority element always exist in the array.

## Problem 11
**Name**: Search a 2D Matrix<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**C++ Score**: 8ms (97th percentile)<br>

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.

## Problem 12
**Name**: Reorder List<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**C++ Score**: 40ms (99th percentile)<br>

Given a singly linked list L: L0→L1→…→Ln-1→Ln, reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→… You may not modify the values in the list's nodes, only nodes itself may be changed.

## Problem 13
**Name**: Excel Sheet Column<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 36ms (83rd percentile)<br>

Given a positive integer, return its corresponding column title as appear in an Excel sheet. For example:
```
1 -> A
2 -> B
3 -> C
...
26 -> Z
27 -> AA
28 -> AB
...
```

## Problem 14
**Name**: Power of Two<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 4ms (83rd percentile)<br>

Given an integer, write a function to determine if it is a power of two.

## Problem 15
**Name**: Gray Code<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>

The gray code is a binary numeral system where two successive values differ in only one bit. Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.
