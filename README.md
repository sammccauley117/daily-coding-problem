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
**Time Complexity**: O(n)<br>

Implement an algorithm to determine if a string has all unique characters.

## Problem 22
**Name**: Remove Duplicates<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>

Write code to remove duplicates from an unsorted linked list.

## Problem 23
**Name**: Check Permutation<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>

Given two strings, write a method to decide if one is a permutation of the other.

## Problem 24
**Name**: Insertion<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(1)<br>

You are given two 32-bit numbers, `N` and `M`, and two bit positions, `i` and `j`. Write a method to insert `M` into `N` such that `M` starts at bit `j` and ends at bit `i`. You can assume that the bits `j` through `i` have enough space to fit all of `M`. That is, if `M = 10011`, you can just assume that there are at least 5 bits between `j` and `i`. You would not, for example, have `j = 3` and `i = 2`, because `M` could not fully fit between bit `3` and bit `2`.

## Problem 25
**Name**: Urlify<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>

Write a method to replace all spaces in a string with '%20', removing all leading/tailing whitespace and repeated spaces.

## Problem 26
**Name**: Return Kth to Last<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>

Implement an algorithm to find the kth to last element of a singly linked list.

## Problem 27
**Name**: LinkedList<br>
**Source**: Me<br>

Implement a class for the *LinkedList* data structure with public methods *append()* and *print()*.

## Problem 28
**Name**: Partition<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(1)<br>

Write code to partition a linked list around a value `x`, such that all nodes less than `x` come before all nodes greater than or equal to `x`. If `x` is contained within the list, the values of `x` only need to be after the elements less than `x` (see below). The partition element `x` can appear anywhere in the "right partition"; it does not need to appear between the left and right partitions. Example:

```
Input:  3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition = 5]
Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8
```

## Problem 29
**Name**: Palindrome Permutation<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(1)<br>

Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words. Example:

```
Input:  Tact Coa
Output: True
Reason: (permutations: 'taco cat', 'atco cta', etc.)
```

## Problem 30
**Name**: Next Number<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(1)<br>
**Space Complexity**: O(1)<br>

Given a positive integer, print the next smallest and the next largest number that have the same number of 1 bits in their binary representation.

## Problem 31
**Name**: Conversion<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(1)<br>
**Space Complexity**: O(1)<br>

Write a function to determine the number of bits you would need to flip to convert integer `a` to intger `b`. Example:

```
Input:  29 (0b11101), 15 (0b01111)
Output: 2
```

## Problem 32
**Name**: Binary Search<br>
**Source**: Me<br>
**Time Complexity**: O(log(n))<br>
**Space Complexity**: O(1)<br>

Implement the binary search algorithm on a sorted array. Return `-1` if the target element was not found.

## Problem 33
**Name**: Prime Numbers<br>
**Source**: Me<br>
**Time Complexity**: O(n\*p(n)) where p(n) is the n'th prime<br>
**Space Complexity**: O(n)<br>

Write an algorithm to find the first `n` prime numbers.

## Problem 34
**Name**: Stack From Array<br>
**Source**: Me<br>

Implement a class for the *Stack* data structure using an array. The Stack should have public methods *append()*, *pop()*, and *print()*.

## Problem 35
**Name**: Loop Detection<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(n)<br>

Given a circular linked list, implement an algorithm that returns the node at the beginning of the loop. A circular linked list is a (corrupt) linked list in which a node's next pointer points to an earlier node, so as to make a loop in the linked list. Example:

```
Input:  A -> B -> C -> D -> E -> C [the same C as earlier]
Output: C
```

## Problem 36
**Name**: Reverse Words in a String<br>
**Difficulty**: Medium<br>
**Source**: LeetCode<br>
**Python Score**: 32ms (91st percentile)<br>

Given an input string, reverse the string word by word. Example:

```
Input: "the sky is blue"
Output: "blue is sky the"
```

## Problem 37
**Name**: Depth First Search<br>
**Source**: Me<br>

Implement the *Depth First Search* algorithm to determine if a value is present in a graph or not.

## Problem 38
**Name**: Breadth First Search<br>
**Source**: Me<br>

Implement the *Breadth First Search* algorithm to determine if a value is present in a graph or not.

## Problem 39
**Name**: Minimal Tree<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(n)<br>

Given a sorted (increasing order) array with unique integer elements, write an algorithm to create a binary search tree with minimal height.

## Problem 40
**Name**: List of Depths<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(n)<br>

Given a binary tree, design an alforithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth `D`, you'll have `D` linked lists).

## Problem 41
**Name**: String Compression<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(n)<br>

Implement a method to perform basic string compression using the counts of repeated characters. For example, the string `aabcccccaaa` would become `a2b1c5a3`. If the 'compressed' string would not become smaller than the original string, your method should return the original string. You can assume the string has only uppercase and lowercase letters (a-z).

## Problem 42
**Name**: Pairwise Swap<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(1)<br>
**Space Complexity**: O(1)<br>

Write a program to swap odd and even bits in an integer with as few instructions as possible (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, and so on).

## Problem 43
**Name**: Merge Sort<br>
**Source**: Me<br>
**Time Complexity**: O(nlog(n))<br>
**Space Complexity**: O(n)<br>

Implement the *Merge Sort* algorithm to sort a list of numbers.

## Problem 44
**Name**: Quick Sort<br>
**Source**: Me<br>
**Time Complexity**: O(nlog(n))<br>
**Space Complexity**: O(n)<br>

Implement the *Quick Sort* algorithm to sort a list of numbers.

## Problem 45
**Name**: Length of Last Word<br>
**Difficulty**: Easy<br>
**Source**: LeetCode<br>
**Python Score**: 28ms (96th percentile)<br>

Given a string s consists of upper/lower-case alphabets and empty space characters `' '`, return the length of last word in the string. If the last word does not exist, return 0. Note: A word is defined as a character sequence consists of non-space characters only. Example:

```
Input: "Hello World"
Output: 5
```

## Problem 46
**Name**: Doubly LinkedList<br>
**Source**: Me<br>

Implement a class for the *Doubly LinkedList* data structure with public methods *append()* and *print()*.

## Problem 47
**Name**: Palindrome<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(1)<br>

Implement a function to check if a linked list is a palindrome.

## Problem 48
**Name**: Doubly LinkedList (C++)<br>
**Source**: Me<br>

Implement a class for the *Doubly LinkedList* data structure with public methods *append()* and *print()*.

## Problem 49
**Name**: Triple Step<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(3^n)<br>
**Space Complexity**: O(n)<br>

A child is running up a staircase with `n` steps and can hop either 1 step, 2 steps, or 3 steps at a time. Implement a recursive method to count how many possible ways the child can run up the stairs.

## Problem 50
**Name**: String Rotation<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(A + B)<br>
**Space Complexity**: O(1)<br>

Given two strings, `s1` and `s2`, write code to check if `s2` is a rotation of `s1`. Example: `waterbottle` is a rotation of `erbottlewat`.

## Problem 51
**Name**: Palindrome Permutation (C++)<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(n)<br>

Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words. Example:

```
Input:  Tact Coa
Output: True
Reason: (permutations: 'taco cat', 'atco cta', etc.)
```

## Problem 52
**Name**: Is Unique<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(n)<br>
**Space Complexity**: O(1)<br>

Implement an algorithm to determine if a string has all unique characters *without* additional data structures.

## Problem 53
**Name**: Zero Matrix<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(A*B)<br>
**Space Complexity**: O(1)<br>

Write an algorithm such that if an element in an `MxN` matrix is a 0, its entire row and column are set to 0.

## Problem 54
**Name**: Three in One<br>
**Source**: Cracking the Coding Interview<br>

Use a single array to implement three stacks with operations *push( )*, *pop( )*, and *print( )*.

## Problem 55
**Name**: Queue via Stacks<br>
**Source**: Cracking the Coding Interview<br>

Implement a *MyQueue* class which implements a queue using two stacks.

## Problem 56
**Name**: Sum Lists<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(A+B)<br>
**Space Complexity**: O(A+B)<br>

You have two numbers represented by a linked list, where each node contains a single digit. Suppose the digits are stored in forward order. Write a function that adds the two numbers and returns the sum as a linked list. Example:

```
Input:  (6 -> 1 -> 7) + (2 -> 9 -> 5). That is, 617 + 296.
Output: 9 -> 1 -> 2. That is 912.
```

## Problem 57
**Name**: Sum Lists Reverse<br>
**Source**: Cracking the Coding Interview<br>
**Time Complexity**: O(A+B)<br>
**Space Complexity**: O(A+B)<br>

You have two numbers represented by a linked list, where each node contains a single digit. Suppose the digits are stored in *reverse* order, such that the 1's digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list. Example:

```
Input:  (7 -> 1 -> 6) + (5 -> 9 -> 2). That is, 617 + 296.
Output: 2 -> 1 -> 9. That is 912.
```
