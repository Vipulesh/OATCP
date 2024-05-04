# Short Form Dictionary Generator

This C++ program generates short forms for words in a dictionary based on subsequences of length 1 to 4.

## Description

Given a dictionary of words, this program generates short forms for each word using its subsequences of length 1 to 4. It then maps each valid subsequence to its corresponding word in the dictionary.

## Implementation Details

- The program defines a function `generateSubsequences()` to generate all subsequences of length 1 to 4 for a given word.
- It defines another function `createShortForms()` to create short forms for words in the dictionary using their subsequences.
- The program iterates through each word in the dictionary, generates its subsequences, and selects the first valid subsequence as the short form.
- Finally, it prints the mapping of short forms to words.

## Requirements

- C++ compiler
- Standard Template Library (STL)

## Time Complexity

- Let `n` be the number of words in the dictionary and `m` be the average length of the words.
- The time complexity of the program is `O(n * m^4)`, where `m^4` represents the maximum number of subsequences generated for each word.
