# Counting Subgrids

This C++ program counts the number of subgrids in a given binary matrix that contain exactly two 1s in each row and column.

## Description

Given a binary matrix, this program calculates the number of subgrids where each row and each column contains exactly two 1s. It efficiently computes the count of such subgrids using bitwise operations and bit counting.

## Approach

1. **Input Processing:**
   - The program reads an integer `n` from the standard input (stdin), indicating the size of the square binary matrix (`n x n`).
   - It then reads the binary matrix from the input, where each cell contains either 0 or 1.

2. **Counting Subgrids:**
   - The program iterates over each row of the matrix and constructs an integer representation of the row using bitwise operations (`row[i]`).
   - For each pair of rows `i` and `j` (where `i < j`), it calculates the bitwise AND of `row[i]` and `row[j]` to find the common bits (1s) between the two rows.
   - It then counts the number of 1s in the bitwise AND result using the built-in function `__builtin_popcount`.
   - If the count of common bits is exactly 2, it calculates the number of subgrids containing those two 1s and increments the total count accordingly.

3. **Output:**
   - Finally, the program prints the total count of subgrids meeting the specified criteria to the standard output (stdout).

## Requirements

- C++ compiler
- Standard Template Library (STL)

## Time Complexity

- Let `n` be the size of the binary matrix (number of rows/columns).
- The time complexity of the program is `O(n^2)` due to the nested loops iterating over all pairs of rows.
