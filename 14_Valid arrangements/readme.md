# Valid Arrangement of Pairs

This C++ program finds a valid arrangement of pairs of integers such that each pair is adjacent to another pair based on the given input constraints.

## Description

Given a list of pairs of integers, this program aims to find a valid arrangement of these pairs such that each pair is adjacent to another pair in the arrangement. It utilizes the Eulerian path algorithm to achieve this goal efficiently.

## Implementation Details

- The program uses an unordered map to represent the adjacency list of the graph, where each pair of integers forms an edge in the graph.
- It calculates the in-degree and out-degree of each vertex in the graph to determine the starting vertex for the Eulerian path.
- The program then performs a depth-first search (DFS) traversal to find the Eulerian path starting from the chosen starting vertex.
- The resulting Eulerian path represents a valid arrangement of pairs of integers.

## Requirements

- C++ compiler
- Standard Template Library (STL)

## Error Handling

- If a valid arrangement is not possible based on the input constraints, the program outputs "No valid arrangement possible".

## Time Complexity

- Let `n` be the number of pairs in the input.
- The time complexity of the program is `O(n)` due to the DFS traversal to find the Eulerian path.
