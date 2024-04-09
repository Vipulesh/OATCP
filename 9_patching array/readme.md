# Minimum Number of Patches

This repository contains a C++ program that calculates the minimum number of patches required to make a given array of numbers contain all integers up to a certain limit.

## Problem Explanation
Given a sorted array of positive integers `nums` and an integer `n`, we need to find the minimum number of patches required to make the array contain all integers from 1 to `n`, inclusive.

We can add numbers to the array (`nums`) in such a way that the array always remains sorted. The goal is to find the minimum number of patches needed to fill the gaps between the elements in `nums` and make the array contain all integers from 1 to `n`.

## Table of Contents
- [Introduction](#introduction)
- [How to Use](#how-to-use)
- [Functionality](#functionality)

## Introduction
This C++ program is designed to solve the problem of finding the minimum number of patches required to make a given array of numbers contain all integers from 1 to a certain limit `n`. It iterates through the array `nums` and calculates the maximum reach based on the elements encountered so far.

## How to Use
To use this program, you will need a C++ compiler installed on your system. Follow these steps:
1. Clone this repository to your local machine.
2. Navigate to the directory where the code is located.
3. Compile the code using a C++ compiler. For example, using g++:
4. Run the compiled executable:
5. Enter the space-separated array of numbers.
6. Enter the value of `n`.
7. The program will output the minimum number of patches required to make the array contain all integers from 1 to `n`.

## Functionality
The `minPatches` function takes a vector of integers representing the array `nums` and an integer `n` as input. It calculates the minimum number of patches required to make the array contain all integers from 1 to `n`. The algorithm iterates through the array `nums`, updating the maximum reach based on the elements encountered so far, and counts the number of patches needed.

