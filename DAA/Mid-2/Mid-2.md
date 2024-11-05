<!--
  Author: omteja04
  Created on: 04-11-2024 19:56:09
  Description: Mid-2
-->

- [Mid-2](#mid-2)
  - [Describe the Dynamic 0/1 Knapsack Problem. Define merging and purging rules in 0/1 knapsack problem and explain with an example.](#describe-the-dynamic-01-knapsack-problem-define-merging-and-purging-rules-in-01-knapsack-problem-and-explain-with-an-example)
    - [Merging and Purging Rules in 0/1 Knapsack Problem](#merging-and-purging-rules-in-01-knapsack-problem)
    - [Example of Merging and Purging](#example-of-merging-and-purging)
    - [Complexity Analysis of the 0/1 Knapsack Problem](#complexity-analysis-of-the-01-knapsack-problem)
      - [Time Complexity](#time-complexity)
      - [Space Complexity](#space-complexity)
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
    - [Complexity Analysis](#complexity-analysis)
      - [Time Complexity](#time-complexity-1)
      - [Space Complexity](#space-complexity-1)
    - [Summary](#summary)
    - [Problem](#problem)
    - [Solution](#solution-1)
  - [Give the statement of sum –of subsets problem. Find all sum of subsets for n=4, (w1, w2, w3, w4) = (11, 13, 24, 7) and M=31.Draw the portion of the state space tree using fixed – tuple sized approach.](#give-the-statement-of-sum-of-subsets-problem-find-all-sum-of-subsets-for-n4-w1-w2-w3-w4--11-13-24-7-and-m31draw-the-portion-of-the-state-space-tree-using-fixed--tuple-sized-approach)
    - [Complexity Analysis of the Sum of Subsets Problem](#complexity-analysis-of-the-sum-of-subsets-problem)
      - [1. Time Complexity](#1-time-complexity)
      - [2. Space Complexity](#2-space-complexity)
      - [Summary of Complexity](#summary-of-complexity)
    - [Problem Statement for the Given Instance](#problem-statement-for-the-given-instance)
    - [Solution Approach](#solution-approach)
    - [State Space Tree for the Fixed-Tuple Sized Approach](#state-space-tree-for-the-fixed-tuple-sized-approach)
    - [Building the State Space Tree and Identifying Valid Paths](#building-the-state-space-tree-and-identifying-valid-paths)
  - [Explain the classes of P and NP? And discuss about NP-Hard and NP Complete](#explain-the-classes-of-p-and-np-and-discuss-about-np-hard-and-np-complete)
    - [1. **Class P**](#1-class-p)
    - [2. **Class NP**](#2-class-np)
    - [3. **NP-Complete**](#3-np-complete)
    - [4. **NP-Hard**](#4-np-hard)
    - [Summary of Relationships](#summary-of-relationships)
    - [Visualization](#visualization)
    - [Conclusion](#conclusion)

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

### Complexity Analysis of the 0/1 Knapsack Problem

#### Time Complexity

1. **Number of Subproblems**:

   - There are `n` items and `m` possible knapsack capacities.
   - This results in a total of `n * m` subproblems.

2. **Operations per Subproblem**:
   - For each subproblem `dp[i][j]`, the algorithm performs a constant amount of work to choose between including or excluding an item (basic comparison and addition).

Therefore, the **time complexity** of this dynamic programming approach is:
\[
O(n \times m)
\]
where `n` is the number of items, and `m` is the knapsack capacity.

#### Space Complexity

1. **DP Array**:
   - The `dp` table has dimensions `n+1` by `m+1`, storing `n * m` values.
2. **Auxiliary Space**:
   - No extra space beyond the `dp` array is needed, other than variables for iteration.

Thus, the **space complexity** is:
\[
O(n \times m)
\]

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

### Complexity Analysis

#### Time Complexity

1. **Per Node Calculation**:

   - For each node \( j \) in a given stage \( i \), we compute the minimum cost to reach the target node \( t \). This involves evaluating all edges from \( j \) to the nodes in the next stage \( i+1 \).
   - Assuming that each node has, on average, \( m \) outgoing edges to the next stage, calculating the minimum cost for each node \( j \) takes \( O(m) \) time.

2. **Total Calculation Across All Nodes**:
   - Since there are \( n \) total nodes in the graph, and we compute the cost for each node by looking at each of its outgoing edges, the total time complexity is:
     \[
     O(n \times m)
     \]
   - This complexity means that the algorithm is linear with respect to the number of nodes and edges in the graph, which is efficient for sparse graphs.

#### Space Complexity

1. **Graph Representation**:

   - Storing the graph in an adjacency list or adjacency matrix requires \( O(n + m) \) space, where \( n \) is the number of nodes and \( m \) is the number of edges in the graph.

2. **Cost Table**:

   - We maintain a table to store the minimum cost to reach the target from each node, which requires \( O(n) \) space.

3. **Total Space Complexity**:
   - Therefore, the overall space complexity is:
     \[
     O(n + m)
     \]
   - This space requirement is efficient and manageable even for large graphs.

### Summary

- **Time Complexity**: \( O(n \times m) \), efficient for traversing and calculating minimum costs across all nodes and edges.
- **Space Complexity**: \( O(n + m) \), mainly for storing the graph and cost values.

### Problem

![alt text](https://i.ibb.co/RHGnfHz/image.png)

### Solution

![1](https://i.ibb.co/BcHrRtk/Multistage-1.jpg)
![2](https://i.ibb.co/WsmzH92/Multistage-2.jpg)
![3](https://i.ibb.co/MBHmk3h/Multistage-3.jpg)

---

## Give the statement of sum –of subsets problem. Find all sum of subsets for n=4, (w1, w2, w3, w4) = (11, 13, 24, 7) and M=31.Draw the portion of the state space tree using fixed – tuple sized approach.

The **Sum of Subsets Problem** is defined as follows:

> Given a set of \( n \) positive integers \( (w_1, w_2, \ldots, w_n) \) and a target sum \( M \), the problem is to find all subsets of the given set whose elements sum up to exactly \( M \).

### Complexity Analysis of the Sum of Subsets Problem

#### 1. Time Complexity

In the Sum of Subsets problem, we need to explore all possible subsets to find the ones whose elements sum up to exactly \( M \). This is a classic example of the **subset-sum problem**, and it can be solved using either a **backtracking** or **dynamic programming** approach.

- **Backtracking Complexity**: Since there are \( n \) items, each item can either be included or excluded from a subset, leading to \( 2^n \) possible subsets. Thus, the worst-case time complexity for the backtracking approach is \( O(2^n) \).

- **Pruning**: Using backtracking with pruning reduces the number of nodes we need to visit. As soon as the current subset sum exceeds \( M \), we can stop exploring further down that branch. However, this pruning depends on the data and the target \( M \), so in the worst case, the time complexity remains \( O(2^n) \).

#### 2. Space Complexity

The space complexity depends on the **depth of the recursion**:

- **Recursive Depth**: The depth of the recursive calls will be \( n \), where \( n \) is the number of elements in the set. Each recursive call requires some stack space, resulting in a space complexity of \( O(n) \) for the call stack.

- **Storage for Solutions**: If we store each subset that meets the sum \( M \), the space complexity may also increase based on the number of valid subsets found. In the worst case, this could be \( O(2^n) \), but typically, we only store valid solutions.

#### Summary of Complexity

- **Time Complexity**: \( O(2^n) \)
- **Space Complexity**: \( O(n) \) for recursion stack, plus additional space for storing solutions

### Problem Statement for the Given Instance

For \( n = 4 \), the set of weights is:
\[
(w_1, w_2, w_3, w_4) = (11, 13, 24, 7)
\]
and the target sum \( M = 31 \).

### Solution Approach

1. **Generate the State Space Tree**: We create a tree where each level corresponds to a decision to include or exclude a particular element of the set in the current subset.
2. **Fixed-Tuple Sized Approach**: In this approach, we proceed by considering each element in the set, deciding whether to include it in the current subset or exclude it, and moving to the next element.

### State Space Tree for the Fixed-Tuple Sized Approach

Here, we’ll draw the portion of the state space tree relevant to the problem to find subsets that sum up to 31.

1. **Root Node**: Start with an empty subset and a sum of 0.
2. **Level 1 (Considering \( w_1 = 11 \))**:

   - Include \( w_1 \): Subset sum = 11
   - Exclude \( w_1 \): Subset sum = 0

3. **Level 2 (Considering \( w_2 = 13 \))**:

   - For each path, either include or exclude \( w_2 \).

4. **Level 3 (Considering \( w_3 = 24 \))**:

   - For each path, either include or exclude \( w_3 \).

5. **Level 4 (Considering \( w_4 = 7 \))**:
   - For each path, either include or exclude \( w_4 \).

### Building the State Space Tree and Identifying Valid Paths

Let's go through possible subsets and check if their sum matches \( M = 31 \):

1. **Path 1 (Include \( w_1, w_2 \), exclude \( w_3 \), include \( w_4 \))**:

   - Subset = \( \{11, 13, 7\} \)
   - Sum = \( 11 + 13 + 7 = 31 \) (Valid subset)

2. **Path 2 (Exclude \( w_1 \), include \( w_2 \), include \( w_3 \), exclude \( w_4 \))**:

   - Subset = \( \{13, 24\} \)
   - Sum = \( 13 + 24 = 37 \) (Exceeds 31, not valid)

3. **Path 3 (Include \( w_1 \), exclude \( w_2 \), exclude \( w_3 \), include \( w_4 \))**:
   - Subset = \( \{11, 7\} \)
   - Sum = \( 11 + 7 = 18 \) (Less than 31, not valid)

Only **Path 1** yields a valid subset whose elements sum up to \( M = 31 \).

In this tree, we only continue expanding paths until the subset sum exceeds \( M \), allowing us to prune invalid paths early and focus on finding valid solutions.

---

## Explain the classes of P and NP? And discuss about NP-Hard and NP Complete

The classes P and NP are fundamental concepts in computational complexity theory, which studies the resources required to solve computational problems. Let's break down these concepts and discuss NP-Hard and NP-Complete.

### 1. **Class P**

- **Definition**: The class P consists of decision problems (problems with a yes/no answer) that can be solved by a deterministic Turing machine in polynomial time. This means there exists an algorithm that can solve any problem in this class in time that grows polynomially with the size of the input.
- **Example**: Problems like sorting a list, finding the greatest common divisor (GCD), and determining if a number is prime are all in P because they can be solved in polynomial time.

### 2. **Class NP**

- **Definition**: The class NP (nondeterministic polynomial time) consists of decision problems for which a given solution can be verified in polynomial time by a deterministic Turing machine. In other words, if someone provides a potential solution to the problem, you can check if it's correct in polynomial time.
- **Key Characteristic**: While problems in NP can be verified quickly, they may not necessarily be solvable quickly.
- **Example**: The Boolean satisfiability problem (SAT), where given a Boolean expression, the goal is to determine if there exists an assignment of truth values to variables that makes the expression true, is in NP. If someone provides a satisfying assignment, you can verify it in polynomial time.

### 3. **NP-Complete**

- **Definition**: NP-Complete problems are the hardest problems in NP in the sense that if any NP-Complete problem can be solved in polynomial time (i.e., it is in P), then every problem in NP can also be solved in polynomial time. Therefore, NP-Complete problems are both in NP and as hard as any problem in NP.
- **Characteristics**:
  - A problem \(X\) is NP-Complete if:
    - It is in NP.
    - Every problem \(Y\) in NP can be reduced to \(X\) in polynomial time (this reduction means that if you can solve \(X\), you can solve \(Y\) as well).
- **Example**: The Travelling Salesperson Problem (decision version), the Knapsack Problem, and the Hamiltonian Cycle Problem are examples of NP-Complete problems.

### 4. **NP-Hard**

- **Definition**: NP-Hard problems are at least as hard as the hardest problems in NP. A problem is NP-Hard if an algorithm for solving it can be used to solve any NP problem in polynomial time. However, NP-Hard problems are not required to be in NP; they do not need to be decision problems and may not even have a solution verifiable in polynomial time.
- **Characteristics**:
  - An NP-Hard problem does not have to be a decision problem (it can be an optimization problem).
  - If an NP-Hard problem can be solved in polynomial time, then P = NP.
- **Example**: The Halting Problem (which is undecidable and thus not in NP), the Traveling Salesman Problem (optimization version), and the Knapsack Problem (optimization version) are examples of NP-Hard problems.

### Summary of Relationships

- **P** ⊆ **NP**: All problems in P are also in NP.
- **NP-Complete** ⊆ **NP**: All NP-Complete problems are in NP.
- **NP-Hard**: These problems are at least as hard as NP problems and may not be in NP themselves.

### Visualization

A common way to visualize these relationships is:

![Image](https://www.baeldung.com/wp-content/uploads/sites/4/2020/03/P-NP-NP_Hard-NP-Complete-1-1-768x587.png)

### Conclusion

The distinctions between P, NP, NP-Complete, and NP-Hard are crucial for understanding the complexity of computational problems. While problems in P can be solved efficiently, NP problems may not be solvable efficiently, and NP-Complete problems represent the most challenging of those. NP-Hard problems encompass a broader class, including some that may be fundamentally unsolvable in the same way. The P vs. NP question remains one of the most significant unsolved problems in computer science.

<br>
<div align='center'>
  <a href='https://github.com/omteja04' target='_blank'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
