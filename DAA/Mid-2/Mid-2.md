<!--
  Author: omteja04
  Created on: 04-11-2024 19:56:09
  Description: Mid-2
-->

- [Mid-2](#mid-2)
  - [Describe the Dynamic 0/1 Knapsack Problem. Define merging and purging rules in 0/1 knapsack problem and explain with an example.](#describe-the-dynamic-01-knapsack-problem-define-merging-and-purging-rules-in-01-knapsack-problem-and-explain-with-an-example)
    - [Find an optimal solution for the dynamic programming 0/1 knapsack instance for n=3, m=6, profits are (p1, p2, p3 ) = (1,2,5), weights are (w1,w2,w3)=(2,3,4).](#find-an-optimal-solution-for-the-dynamic-programming-01-knapsack-instance-for-n3-m6-profits-are-p1-p2-p3---125-weights-are-w1w2w3234)
    - [Merging and Purging Rules in 0/1 Knapsack Problem](#merging-and-purging-rules-in-01-knapsack-problem)
    - [Example of Merging and Purging](#example-of-merging-and-purging)
    - [Solving a Dynamic Programming 0/1 Knapsack Instance](#solving-a-dynamic-programming-01-knapsack-instance)
      - [Step 1: Define the DP Array](#step-1-define-the-dp-array)
      - [Step 2: Initialization](#step-2-initialization)
      - [Step 3: DP Transition](#step-3-dp-transition)
      - [Step 4: Fill the DP Table](#step-4-fill-the-dp-table)
      - [Step 5: Obtain the Optimal Solution](#step-5-obtain-the-optimal-solution)
      - [Explanation](#explanation)

# Mid-2

## Describe the Dynamic 0/1 Knapsack Problem. Define merging and purging rules in 0/1 knapsack problem and explain with an example.

### Find an optimal solution for the dynamic programming 0/1 knapsack instance for n=3, m=6, profits are (p1, p2, p3 ) = (1,2,5), weights are (w1,w2,w3)=(2,3,4).

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

### Solving a Dynamic Programming 0/1 Knapsack Instance

Given:

- \( n = 3 \)
- Maximum capacity \( m = 6 \)
- Profits \( (p_1, p_2, p_3) = (1, 2, 5) \)
- Weights \( (w_1, w_2, w_3) = (2, 3, 4) \)

#### Step 1: Define the DP Array

Let \( dp[i][j] \) represent the maximum profit that can be obtained with the first \( i \) items and a knapsack capacity \( j \).

#### Step 2: Initialization

- Initialize \( dp[0][j] = 0 \) for all \( j \), representing the case with zero items.
- Initialize \( dp[i][0] = 0 \) for all \( i \), representing the case with zero capacity.

#### Step 3: DP Transition

For each item \( i \) and each capacity \( j \), we have two options:

1. Exclude the item \( i \): \( dp[i][j] = dp[i-1][j] \)
2. Include the item \( i \) (if \( w_i \leq j \)): \( dp[i][j] = dp[i-1][j - w_i] + p_i \)

We select the option that gives the maximum profit:
\[
dp[i][j] = \max(dp[i-1][j], dp[i-1][j - w_i] + p_i) \quad \text{if } w_i \leq j
\]

#### Step 4: Fill the DP Table

Let's fill in the table based on the provided values.

| Item \( i \) | Weight \( w_i \) | Profit \( p_i \) |
| ------------ | ---------------- | ---------------- |
| 1            | 2                | 1                |
| 2            | 3                | 2                |
| 3            | 4                | 5                |

**DP Table** (rows represent items and columns represent capacities):

\[
\begin{array}{c|ccccccc}
i \backslash j & 0 & 1 & 2 & 3 & 4 & 5 & 6 \\
\hline
0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
1 & 0 & 0 & 1 & 1 & 1 & 1 & 1 \\
2 & 0 & 0 & 1 & 2 & 2 & 3 & 3 \\
3 & 0 & 0 & 1 & 2 & 5 & 5 & 6 \\
\end{array}
\]

#### Step 5: Obtain the Optimal Solution

The value in \( dp[3][6] = 6 \) is the maximum profit obtainable with a knapsack capacity of 6 and the given items.

#### Explanation

1. For capacity \( j = 6 \) and item set \((p_1, p_2, p_3)\):
   - By including item 3 (weight = 4, profit = 5), we achieve a profit of 6 when combined with item 1 (weight = 2, profit = 1).
2. Items chosen are item 1 and item 3, giving a total weight of \( 2 + 4 = 6 \) and a total profit of \( 1 + 5 = 6 \).

Thus, the optimal solution yields a maximum profit of **6** with the given capacity of the knapsack.
