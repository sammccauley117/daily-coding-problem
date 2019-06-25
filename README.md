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
**C++ Score**: 4ms (83rd percentile)<br>

Given an integer, write a function to determine if it is a power of two.

## Problem 15
**Name**: Gray Code<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>

The gray code is a binary numeral system where two successive values differ in only one bit. Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

## Problem 16
**Name**: Remove Duplicates from Sorted Array<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 68ms (48th percentile)<br>

Given a sorted array *nums*, remove the duplicates in-place such that each element appear only *once* and return the new length. Do not allocate extra space for another array, you must do this by **modifying the input array in-place** with O(1) extra memory.

## Problem 17
**Name**: Hamming Distance<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**C++ Score**: 0ms (100th percentile)<br>

The *Hamming distance* between two integers is the number of positions at which the corresponding bits are different. Given two integers `x` and `y`, calculate the Hamming distance. Note: 0 ≤ x, y < 23^1

## Problem 18
**Name**: Letter Combinations of a Phone Number<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**Python Score**: 20ms (69th percentile)<br>

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

## Problem 19
**Name**: Capitalize!<br>
**Difficulty**: Easy<br>
**Source**: HackerRank<br>

You are asked to ensure that the first and last names of people begin with a capital letter in their passports. For example, `alison heck` should be capitalized correctly as `Alison Heck`. Given a full name, your task is to capitalize the name appropriately.

## Problem 20
**Name**: Leap Year!<br>
**Difficulty**: Medium<br>
**Source**: HackerRank<br>

We add a Leap Day on February 29, almost every four years. The leap day is an extra, or intercalary day and we add it to the shortest month of the year, February. In the Gregorian calendar three criteria must be taken into account to identify leap years:

1. The year can be evenly divided by 4, is a leap year.
1. However, if the year can be evenly divided by 100, it is NOT a leap year.
1. However, if the year is also evenly divisible by 400. Then it is a leap year.

You are given the year, and you have to write a function to check if the year is leap or not. Note that you have to complete the function and remaining code is given as template.

## Problem 21
**Name**: Is Unique<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)

Implement an algorithm to determine if a string has all unique characters.

## Problem 22
**Name**: Remove Duplicates<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)

Write code to remove duplicates from an unsorted linked list.

## Problem 23
**Name**: Check Permutation<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)

Given two strings, write a method to decide if one is a permutation of the other.

## Problem 24
**Name**: Insertion<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(1)

You are given two 32-bit numbers, `N` and `M`, and two bit positions, `i` and `j`. Write a method to insert `M` into `N` such that `M` starts at bit `j` and ends at bit `i`. You can assume that the bits `j` through `i` have enough space to fit all of `M`. That is, if `M = 10011`, you can just assume that there are at least 5 bits between `j` and `i`. You would not, for example, have `j = 3` and `i = 2`, because `M` could not fully fit between bit `3` and bit `2`.

## Problem 25
**Name**: Urlify<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)

Write a method to replace all spaces in a string with '%20', removing all leading/tailing whitespace and repeated spaces.

## Problem 26
**Name**: Return Kth to Last<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)

Implement an algorithm to find the kth to last element of a singly linked list.
