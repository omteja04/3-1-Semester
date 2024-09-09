<!--
  Author: omteja04
  Created on: 09-09-2024 19:45:36
  Description: AllPairsShortestPath-TheFloyd-WarshallAlgorithm
-->

## All Pairs Shortest Path Problem

The All Pairs Shortest Path (APSP) problem involves finding the shortest paths between all pairs of nodes in a graph. One popular algorithm to solve the
APSP problem is the Floyd-Warshall Algorithm.

### Floyd-Warshall Algorithm

The Floyd-Warshall algorithm is a classic dynamic programming algorithm used to find the shortest paths between all pairs of vertices in a weighted graph. It can handle graphs with negative weights, though it cannot handle graphs with negative weight cycles (cycles where the total weight is negative).

### Algorithm

1.  **Initialization**:

- Initialize the distance matrix `dist[][]` such that:
  - `dist[i][i] = 0` for all nodes `i` (distance from a node to itself is zero).
  - `dist[i][j] = weight(i, j)` for each edge `(i, j)` in the graph.
  - `dist[i][j] = ∞` (infinity) if there is no direct edge between `i` and `j`.

2. **Update Distances**:

   - Iterate over each possible intermediate vertex `k` (where `k` ranges from 1 to `V`, the number of vertices).
   - For each pair of vertices `(i, j)`, update the distance `dist[i][j]` using the following formula:
     \[
     \text{dist}^k[i][j] = \min(\text{dist}^{(k-1)}[i][j], \text{dist}^{(k-1)}[i][k] + \text{dist}^{(k-1)}[k][j])
     \]
   - This formula checks whether the shortest path from `i` to `j` can be improved by going through vertex `k`.

3. **Completion**:
   - After iterating through all possible intermediate vertices, `dist[i][j]` will contain the shortest path distance from vertex `i` to vertex `j`.

### Complexity

- **Time Complexity**: \(O(V^3)\), where \(V\) is the number of vertices. This is due to the three nested loops over vertices.
- **Space Complexity**: \(O(V^2)\) for the distance matrix.

### Example

![](https://i.ibb.co/Qc3cnhX/Whats-App-Image-2024-09-09-at-14-06-16-1a88b874.jpg)
![](https://i.ibb.co/rGBCB1n/Whats-App-Image-2024-09-09-at-14-06-16-9f2f563e.jpg)
