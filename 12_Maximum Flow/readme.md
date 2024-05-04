# Ford-Fulkerson Algorithm

This C++ program implements the Ford-Fulkerson algorithm for finding the maximum flow in a flow network.

## Description

The Ford-Fulkerson algorithm is used to find the maximum flow in a flow network, which is a directed graph where each edge has a capacity and represents a flow of goods from one node to another. The algorithm iteratively augments the flow along a path from the source to the sink until no more augmenting paths can be found. The maximum flow is then calculated based on the flow values of the edges.

## Implementation Details

- The program takes the number of vertices (`V`), the source vertex (`s`), the sink vertex (`t`), and the number of edges (`n`) as input.
- It then reads the edges of the graph (with their respective capacities) from the input.
- The Ford-Fulkerson algorithm is implemented using the residual graph technique, where the residual graph is updated after each augmentation.
- The algorithm uses BFS to find augmenting paths from the source to the sink in the residual graph.
- The maximum flow is computed by summing up the flow values of the edges leaving the source vertex.

## Requirements

- C++ compiler

## Time Complexity

- Let `V` be the number of vertices and `E` be the number of edges in the graph.
- The time complexity of the Ford-Fulkerson algorithm is `O(E * max_flow)`, where `max_flow` is the maximum flow in the graph.
- In the worst case, the algorithm may need to iterate `max_flow` times to find the maximum flow.
