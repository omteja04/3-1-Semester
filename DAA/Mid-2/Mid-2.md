<!--
  Author: omteja04
  Created on: 04-11-2024 19:56:09
  Description: Mid-2
-->

- [Mid-2](#mid-2)
  - [Describe the Dynamic 0/1 Knapsack Problem. Define merging and purging rules in 0/1 knapsack problem and explain with an example.](#describe-the-dynamic-01-knapsack-problem-define-merging-and-purging-rules-in-01-knapsack-problem-and-explain-with-an-example)
    - [Merging and Purging Rules in 0/1 Knapsack Problem](#merging-and-purging-rules-in-01-knapsack-problem)
    - [Example of Merging and Purging](#example-of-merging-and-purging)
    - [Find an optimal solution for the dynamic programming 0/1 knapsack instance for n=3, m=6, profits are (p1, p2, p3 ) = (1,2,5), weights are (w1,w2,w3)=(2,3,4).](#find-an-optimal-solution-for-the-dynamic-programming-01-knapsack-instance-for-n3-m6-profits-are-p1-p2-p3---125-weights-are-w1w2w3234)
      - [Step 1: Define the DP Array](#step-1-define-the-dp-array)
      - [Step 2: Initialization](#step-2-initialization)
      - [Step 3: DP Transition](#step-3-dp-transition)
      - [Step 4: Fill the DP Table](#step-4-fill-the-dp-table)
      - [Step 5: Obtain the Optimal Solution](#step-5-obtain-the-optimal-solution)
      - [Explanation](#explanation)
  - [Explain the problem of Traveling Sales person. And Solve the TSP for the graph edge costs given by the following Cost Adjacency matrix](#explain-the-problem-of-traveling-sales-person-and-solve-the-tsp-for-the-graph-edge-costs-given-by-the-following-cost-adjacency-matrix)
    - [Problem Definition](#problem-definition)
    - [Solving TSP with a Cost Adjacency Matrix](#solving-tsp-with-a-cost-adjacency-matrix)
    - [Solution](#solution)
    - [Finding the Optimal Tour](#finding-the-optimal-tour)
  - [Explain the problem of Multistage Graph and find the shortest path and its cost for the given multistage graph](#explain-the-problem-of-multistage-graph-and-find-the-shortest-path-and-its-cost-for-the-given-multistage-graph)
    - [Problem of Multistage Graph](#problem-of-multistage-graph)
      - [Characteristics of Multistage Graphs:](#characteristics-of-multistage-graphs)
    - [Finding the Shortest Path and Its Cost](#finding-the-shortest-path-and-its-cost)
    - [Problem Definition](#problem-definition-1)
    - [Dynamic Programming Formulation](#dynamic-programming-formulation)
    - [Problem](#problem)
    - [Solution](#solution-1)

# Mid-2

## Describe the Dynamic 0/1 Knapsack Problem. Define merging and purging rules in 0/1 knapsack problem and explain with an example.

The **Dynamic 0/1 Knapsack Problem** is a classic optimization problem in which you have a knapsack with a maximum weight capacity \( m \) and a set of \( n \) items, each with a weight \( w_i \) and a profit (or value) \( p_i \). The objective is to determine the maximum profit that can be obtained by selecting a subset of items such that the total weight does not exceed the knapsack’s capacity. In the 0/1 variant, each item can either be included in the knapsack or excluded, meaning fractional parts of items are not allowed.

### Merging and Purging Rules in 0/1 Knapsack Problem

In the context of the 0/1 Knapsack Problem, **merging** and **purging** rules help in simplifying and optimizing the solution by managing which items or item combinations are retained in each step.

1. **Merging Rule**: This rule involves combining two solutions when they lead to the same or equivalent states. If two solutions have the same weight and one has a higher profit, the one with the lower profit can be ignored. This way, we only keep the solutions that have the highest profit for each specific weight.

2. **Purging Rule**: This rule eliminates any suboptimal solutions that cannot lead to an optimal answer. If a solution with a certain weight has a lower profit than another solution with a similar weight, we purge the solution with the lower profit, as it will never be a part of the optimal solution.

These rules help reduce the number of states (subproblems) that need to be computed, optimizing the dynamic programming approach.

### Example of Merging and Purging

Suppose we have two states for a knapsack:

- State A: weight = 4, profit = 10
- State B: weight = 4, profit = 8

Using the **purging rule**, we can discard State B because it has a lower profit for the same weight. Now, if we come across another state, say:

- State C: weight = 6, profit = 10

We cannot discard State C as it has a different weight. If more items are considered, the **merging rule** will apply by combining results with similar weights but prioritizing those with higher profits.

### Find an optimal solution for the dynamic programming 0/1 knapsack instance for n=3, m=6, profits are (p1, p2, p3 ) = (1,2,5), weights are (w1,w2,w3)=(2,3,4).

Given:

- \( n = 3 \) (3 items)
- Maximum capacity \( m = 6 \)
- Profits \( p_1, p_2, p_3 = 1, 2, 5 \)
- Weights \( w_1, w_2, w_3 = 2, 3, 4 \)

#### Step 1: Define the DP Array

Let \( dp[i][j] \) represent the maximum profit that can be obtained with the first \( i \) items and a knapsack capacity \( j \).

#### Step 2: Initialization

- \( dp[0][j] = 0 \) for all \( j \), representing the case with zero items.
- \( dp[i][0] = 0 \) for all \( i \), representing the case with zero capacity.

#### Step 3: DP Transition

For each item \( i \) and each capacity \( j \), we have two options:

1. **Exclude the item \( i \)**:
   \[
   dp[i][j] = dp[i-1][j]
   \]

2. **Include the item \( i \)** (if \( w_i \leq j \)):
   \[
   dp[i][j] = dp[i-1][j - w_i] + p_i
   \]

We select the option that gives the maximum profit:
\[
dp[i][j] = \max(dp[i-1][j], dp[i-1][j - w_i] + p_i) \quad \text{if } w_i \leq j
\]

#### Step 4: Fill the DP Table

Let’s fill in the table based on the provided values.

| Item \( i \) | Weight \( w_i \) | Profit \( p_i \) |
| ------------ | ---------------- | ---------------- |
| 1            | 2                | 1                |
| 2            | 3                | 2                |
| 3            | 4                | 5                |

**DP Table** (rows represent items and columns represent capacities):

\[
\begin{array}{|c|c|c|c|c|c|c|c|}
\hline
i \backslash j & 0 & 1 & 2 & 3 & 4 & 5 & 6 \\
\hline
0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
1 & 0 & 0 & 1 & 1 & 1 & 1 & 1 \\
2 & 0 & 0 & 1 & 2 & 2 & 3 & 3 \\
3 & 0 & 0 & 1 & 2 & 5 & 5 & 6 \\
\hline
\end{array}
\]

#### Step 5: Obtain the Optimal Solution

The value in \( dp[3][6] = 6 \) is the maximum profit obtainable with a knapsack capacity of 6 and the given items.

#### Explanation

1. For capacity \( j = 6 \) and item set \( (p_1, p_2, p_3) \):
   - By including item 3 (weight = 4, profit = 5), we achieve a profit of 6 when combined with item 1 (weight = 2, profit = 1).
2. Items chosen are item 1 and item 3, giving a total weight of \( 2 + 4 = 6 \) and a total profit of \( 1 + 5 = 6 \).

Thus, the optimal solution yields a maximum profit of **6** with the given capacity of the knapsack.

---

## Explain the problem of Traveling Sales person. And Solve the TSP for the graph edge costs given by the following Cost Adjacency matrix

The **Travelling Salesperson Problem (TSP)** is a classic optimization problem in which a salesperson must visit a set of cities exactly once and return to the starting city, while minimizing the total travel cost. TSP is an NP-hard problem, meaning that the computational time required to solve it grows exponentially with the number of cities.

### Problem Definition

Given:

- A set of \( n \) cities and the travel cost between each pair of cities.
- The goal is to determine the shortest possible route that:
  - Visits each city exactly once.
  - Returns to the starting city.

In the TSP, a common approach is to represent the travel costs between cities as an **adjacency matrix**, where the entry \( \text{cost}[i][j] \) represents the travel cost from city \( i \) to city \( j \). The challenge is to find the path with the minimum total cost.

### Solving TSP with a Cost Adjacency Matrix

Let’s solve the TSP for the given graph using the **Cost Adjacency Matrix**:

\[
\begin{array}{|c|c|c|c|c|}
\hline
& 1 & 2 & 3 & 4 \\
\hline
1 & 0 & 10 & 15 & 20 \\
2 & 5 & 0 & 9 & 10 \\
3 & 6 & 13 & 0 & 12 \\
4 & 8 & 8 & 9 & 0 \\
\hline
\end{array}
\]

Here:

- There are 4 cities (labeled `1`, `2`, `3`, `4`).
- The entry at \text{matrix}[i][j] gives the travel cost from city \( i \) to city \( j \).

### Solution

We will solve this problem by exploring all possible solutions systematically and picking the best one.

Here’s a structured way to approach this problem using a bottom-up dynamic programming technique.

![tsp-1](https://i.ibb.co/mG6JVsN/TSP-1.jpg)
![tsp-2](https://i.ibb.co/S3C5BRM/TSP-2.jpg)

### Finding the Optimal Tour

After calculating the costs for each tour, we identify the tour with the minimum cost:

- The minimum cost is **35**.
- The optimal tour is: **1 → 2 → 4 → 3 → 1**

---

## Explain the problem of Multistage Graph and find the shortest path and its cost for the given multistage graph

### Problem of Multistage Graph

A **multistage graph** is a directed graph that consists of multiple stages where vertices represent nodes in each stage. The main objective is to find the shortest path from a source vertex (start node) in the first stage to a destination vertex (end node) in the last stage, possibly passing through several intermediate stages.

#### Characteristics of Multistage Graphs:

1. **Stages**: The graph is divided into several stages. Each stage has a set of vertices, and there are edges connecting vertices from one stage to vertices in the next stage.
2. **Directed Edges**: The edges have a direction, meaning you can only move from one vertex to another in the specified direction.
3. **Costs**: Each edge has an associated cost, which can represent distance, time, or any other metric.

### Finding the Shortest Path and Its Cost

To find the shortest path in a multistage graph, we can use **Dynamic Programming**. Here's how to approach the problem:
To formulate the dynamic programming approach for a \( k \)-stage graph problem, let's consider the definitions and recursive relationships required to derive the minimum cost paths from a source vertex \( s \) to a target vertex \( t \).

In this we will traverse from the destination node.

### Problem Definition

**Graph Structure**:

- The graph is divided into \( k \) stages. Each stage \( V_i \) contains a set of vertices. The path starts at the source vertex in stage 1 and ends at the target vertex in stage \( k \).
- The vertices in the graph are denoted as \( V_1, V_2, \ldots, V_k \), where \( V_1 \) is the set of vertices reachable from the source \( s \) and \( V_k \) contains the target vertex \( t \).

### Dynamic Programming Formulation

1. **State Definition**:
   - Let \( \text{cost}(s, i) \) represent the minimum cost from node \( i \) in stage \( s \) to the target node \( t \).
2. **Base Case**:

   - Since the cost to reach the target from itself is zero, we define:
     \[
     \text{cost}(s, t) = 0
     \]
   - This implies that the minimum cost to reach the target from the target node \( t \) is zero.

3. **Recursive Relation**:

   - For any node \( j \) in stage \( i \), the minimum cost to reach the target \( t \) from \( j \) is calculated by considering all nodes \( l \) in the next stage (\( i + 1 \)) that are connected to \( j \). The formula is:
     \[
     \text{cost}(i, j) = \min\_{l \in \text{next stage}} \left( \text{c}(j, l) + \text{cost}(i + 1, l) \right)
     \]
   - Here:
     - \( \text{c}(j, l) \) is the cost of the edge from node \( j \) to node \( l \) in the next stage.
     - \( \text{cost}(i + 1, l) \) is the minimum cost to reach the target \( t \) from node \( l \), which we calculate recursively.

4. **Final Solution**:
   - The minimum cost to go from the source \( s \) to the target \( t \) is given by \( \text{cost}(1, s) \), where \( \text{cost}(1, s) \) is computed by filling in the \( \text{cost}(i, j) \) values for each node, starting from the target \( t \) and moving backward through each stage towards the source \( s \).

### Problem

![alt text](https://i.ibb.co/RHGnfHz/image.png)

### Solution

![1](https://i.ibb.co/BcHrRtk/Multistage-1.jpg)
![2](https://i.ibb.co/WsmzH92/Multistage-2.jpg)
![3](https://i.ibb.co/MBHmk3h/Multistage-3.jpg)

<br>
<div align='center'>
  <a href='https://github.com/omteja04' target='_blank'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
