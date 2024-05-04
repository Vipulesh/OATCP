# Hamming Distance Calculator

This C++ program calculates the total Hamming distance between all pairs of integers provided in the input.

## Description

The Hamming distance between two integers is the number of positions at which the corresponding bits are different. Given a list of integers, this program computes the total Hamming distance between all pairs of integers in the list.

## Approach

1. **Input Processing:**
   - The program reads a space-separated list of integers from the standard input (stdin).
   - It parses the input string into individual integers and stores them in a vector.

2. **Hamming Distance Calculation:**
   - The program defines a function `hammingDistance` to calculate the Hamming distance between two integers.
   - The Hamming distance between two integers is computed by comparing their corresponding bits.
   - For each bit position (from most significant to least significant):
     - If the bits at the same position in the two integers are different, the Hamming distance is incremented.
   - The total Hamming distance between all pairs of integers in the input list is computed by iterating over all pairs of integers and summing up their Hamming distances.

3. **Output:**
   - The program prints the total Hamming distance between all pairs of integers to the standard output (stdout).

## Requirements

- C++ compiler
- Standard Template Library (STL)

## Time Complexity

- Let `n` be the number of integers in the input list.
- Calculating the Hamming distance between two integers takes `O(1)` time.
- There are `O(n^2)` pairs of integers in the input list.
- Therefore, the overall time complexity of the program is `O(n^2)`.
