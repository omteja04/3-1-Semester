<!--
  Author: omteja04
  Created on: 09-09-2024 13:35:54
  Description: Unit-3
-->

## 1. Discuss about the Dynamic Programming. Explain about Principles of optimality, Feasible solution, Optimal solution & also differentiate how the Dynamic Programming is different from Divide and Conquer.

### Dynamic Programming (DP)

Dynamic Programming (DP) is a method used to solve complex problems by
breaking them down into simpler sub-problems that overlap. It is particularly
useful for optimization problems where you need to find the best solution (e.g.,
shortest path, maximum value, etc.). DP saves the results of sub-problems to
avoid recalculating them, making it more efficient than brute force methods.
There are two main approaches in DP:

#### 1. Top-down (Memoization):

- Recursively solve sub-problems and store their results to avoid re-computation.

#### 2. Bottom-up (Tabulation):

- Build the solution from the smallest sub-problems and use their results to solve bigger ones.

### 1. Principle of Optimality

The principle of optimality states that an optimal solution to a problem can be
constructed from optimal solutions to its sub-problems. In other words, for a
global optimal solution to exist, the solutions to the smaller sub-problems must
also be optimal.

**For example**, in the shortest path problem, if the optimal path from A to D
passes through B, then the path from A to B must also be the shortest.

### 2. Feasible Solution

A feasible solution is any solution that satisfies all the constraints of the
problem, but it may not necessarily be the best or optimal solution. It is a
solution that is valid in the context of the problem but may not yield the best
outcome.

**For example**, in the knapsack problem, a feasible solution is a selection of items
that fit within the weight limit, even if they don’t provide the maximum value.

### 3. Optimal Solution

An optimal solution is the best solution among all feasible solutions. It is the
one that maximizes or minimizes the objective of the problem, depending on
the context.

**For example**, in the same knapsack problem, the optimal solution is the
selection of items that provides the maximum possible value without
exceeding the weight limit.

---

### Difference Between Dynamic Programming and Divide and Conquer

Sure, here's a detailed comparison between Dynamic Programming (DP) and Divide and Conquer:

### Comparison Between Dynamic Programming (DP) and Divide and Conquer

| **Dynamic Programming (DP)**                                                                                                                            | **Divide and Conquer**                                                                                                                                   |
| ------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Solves **overlapping sub-problems**. Uses memoization to store results of sub-problems to avoid redundant calculations.                                 | Solves **non-overlapping sub-problems**. sub-problems are solved independently without reusing previous results.                                         |
| Relies on **optimal substructure**. The optimal solution to the problem can be constructed from optimal solutions to its sub-problems.                  | **No need for optimal substructure**. The sub-problems are combined to form the solution, but intermediate results are not necessarily stored or reused. |
| **More efficient** when sub-problems overlap. By storing results of sub-problems (memoization), it avoids solving the same problem multiple times.      | **More efficient** when sub-problems are independent and do not overlap. Each subproblem is solved once, and results are combined.                       |
| Typically uses a **bottom-up approach**. Solves smaller sub-problems first and uses these solutions to build up to the solution of the overall problem. | Typically uses a **top-down approach**. Recursively divides the problem into smaller sub-problems, solves them, and combines their solutions.            |
| **Fibonacci sequence**: Overlapping sub-problems like `F(n-1)` and `F(n-2)` are solved once and stored for future use.                                  | **Merge sort**: The array is recursively divided into two halves, sorted independently, and then merged.                                                 |

---
