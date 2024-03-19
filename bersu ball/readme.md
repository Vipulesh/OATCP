# Dance Partner Matching Program

## Overview
This program matches dance partners based on their preferences. It reads two lists of integers from the standard input, representing the preferences of two groups, and outputs the maximum number of pairs that can be formed where the preferences differ by at most 1.

## How to Run
Compile the program with a C++ compiler and run the executable. Input the number of elements for both groups, followed by the preference values for each member.

## Input Format
- First line: An integer `n1`, the number of members in the first group.
- Next `n1` lines: The preference values for each member of the first group.
- Next line: An integer `n2`, the number of members in the second group.
- Next `n2` lines: The preference values for each member of the second group.

## Output Format
The program outputs a single integer, the maximum number of matching pairs that can be formed.


## Implementation Details
- The program uses vectors to store the preferences of both groups.
- It sorts both vectors and then iterates through them to find matches.
- If a match is found, the program increments the count and marks the matched member from the second group to avoid duplicate matching.
