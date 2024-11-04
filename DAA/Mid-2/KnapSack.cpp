/**
 * Author: omteja04
 * Created on: 04-11-2024 20:06:03
 * Description: Solves the 0/1 Knapsack Problem using Dynamic Programming
 **/

#include <algorithm>
#include <iostream>
#include <vector>

// Function to find the maximum profit for given items and knapsack capacity
// n: Number of items
// m: Maximum weight capacity of the knapsack
// profits: Array of profits of each item
// weights: Array of weights of each item
int solve(int n, int m, int *profits, int *weights) {
  // Create a 2D DP array with dimensions (n+1) x (m+1), initialized to 0
  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1));

  // Build the DP table by evaluating each item and each weight capacity
  for (int i = 1; i <= n; i++) {
    for (int w = 1; w <= m; w++) {
      // If the item can fit in the knapsack, consider including it
      if (weights[i - 1] <= w) {
        dp[i][w] = std::max(dp[i - 1][w], // Exclude the item
                            dp[i - 1][w - weights[i - 1]] +
                                profits[i - 1]); // Include the item
      } else {
        // If the item can't fit, keep the previous maximum profit for this
        // weight
        dp[i][w] = dp[i - 1][w];
      }
    }
  }

  // The maximum profit for the given capacity is stored in dp[n][m]
  return dp[n][m];
}

int main() {
  // Number of items and knapsack capacity
  int n = 3; // Items
  int m = 6; // Weight Capacity

  // Arrays for profits and weights of each item
  int profits[] = {1, 2, 5};
  int weights[] = {2, 3, 4};

  // Calculate the maximum profit
  int ans = solve(n, m, profits, weights);

  // Output the result
  std::cout << ans;
}
