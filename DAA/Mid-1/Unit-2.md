<!--
  Author: omteja04
  Created on: 09-09-2024 14:17:35
  Description: Unit-2
-->

- [1. Explain about the general abstraction for the Divide and Conquer Strategy](#1-explain-about-the-general-abstraction-for-the-divide-and-conquer-strategy)
  - [General Abstraction of Divide and Conquer Strategy](#general-abstraction-of-divide-and-conquer-strategy)
    - [1. Divide](#1-divide)
    - [2. Conquer](#2-conquer)
    - [3. Combine](#3-combine)
  - [Examples of Divide and Conquer Algorithms:](#examples-of-divide-and-conquer-algorithms)
    - [Merge Sort](#merge-sort)
    - [Binary Search](#binary-search)
  - [Advantages of Divide and Conquer:](#advantages-of-divide-and-conquer)
  - [Disadvantages:](#disadvantages)
- [2. Explain the Merge Sort Algorithm? Calculate Time Complexity of it? Draw the tree of calls of merge sort for the following set `310, 285, 179, 652, 351, 423, 861, 254, 450, 520` using merge sort algorithm and draw the tree of calls of merge sort](#2-explain-the-merge-sort-algorithm-calculate-time-complexity-of-it-draw-the-tree-of-calls-of-merge-sort-for-the-following-set-310-285-179-652-351-423-861-254-450-520-using-merge-sort-algorithm-and-draw-the-tree-of-calls-of-merge-sort)
  - [Merge Sort Algorithm](#merge-sort-algorithm)
    - [Steps of Merge Sort](#steps-of-merge-sort)
  - [Merge Sort Pseudo-Code](#merge-sort-pseudo-code)
    - [Main Merge Sort Function for Dividing](#main-merge-sort-function-for-dividing)
    - [Merge Function](#merge-function)
  - [Time Complexity](#time-complexity)
    - [Time Complexity Analysis](#time-complexity-analysis)
  - [Example](#example)
    - [Tree of Calls for Merge Sort](#tree-of-calls-for-merge-sort)
- [3. Explain the Quick Sort Algorithm? Calculate Time Complexity of it? Draw the tree of calls of Quicksort for the following set of elements, `(20, 30, 10, 40, 5, 60, 90, 45, 35, 25, 15, 55)`](#3-explain-the-quick-sort-algorithm-calculate-time-complexity-of-it-draw-the-tree-of-calls-of-quicksort-for-the-following-set-of-elements-20-30-10-40-5-60-90-45-35-25-15-55)
  - [Quick Sort Algorithm](#quick-sort-algorithm)
    - [Steps of Quick Sort](#steps-of-quick-sort)
  - [Quick Sort Pseudo-Code](#quick-sort-pseudo-code)
    - [Quick Sort Function](#quick-sort-function)
    - [Partition Function](#partition-function)
  - [Time Complexity](#time-complexity-1)
    - [Time Complexity Analysis](#time-complexity-analysis-1)
  - [Best Case Time Complexity:](#best-case-time-complexity)
  - [Average Case Time Complexity:](#average-case-time-complexity)
  - [Worst Case Time Complexity:](#worst-case-time-complexity)
  - [Example](#example-1)
    - [Tree of Calls for Quick Sort](#tree-of-calls-for-quick-sort)
- [4. Explain about the Process of Tiling the Defective Chess Board with neat Diagrams](#4-explain-about-the-process-of-tiling-the-defective-chess-board-with-neat-diagrams)
  - [Problem Definition](#problem-definition)
  - [Approach](#approach)
  - [Diagrammatic Representation](#diagrammatic-representation)
  - [Time Complexity Analysis](#time-complexity-analysis-2)
  - [Time Complexity Calculation](#time-complexity-calculation)
  - [Final Time Complexity](#final-time-complexity)
- [Discuss and write the General Control Abstraction for Greedy Technique and Find the optimal solution of the knapsack instance n = 7, M = 15, (p1, p2, …p7) = (10, 5, 15, 7, 6, 18, 3) and (w1, w2, ……w7) = (2, 3, 5, 7, 1, 4, 1).](#discuss-and-write-the-general-control-abstraction-for-greedy-technique-and-find-the-optimal-solution-of-the-knapsack-instance-n--7-m--15-p1-p2-p7--10-5-15-7-6-18-3-and-w1-w2-w7--2-3-5-7-1-4-1)
  - [General Control Abstraction for the Greedy Technique](#general-control-abstraction-for-the-greedy-technique)
  - [General Greedy Algorithm Pseudo code](#general-greedy-algorithm-pseudo-code)
  - [Optimal Solution for the Knapsack Problem](#optimal-solution-for-the-knapsack-problem)
  - [Problem parameters:](#problem-parameters)
  - [Step-by-step approach:](#step-by-step-approach)
  - [Selected items:](#selected-items)
  - [Final solution:](#final-solution)
  - [Summary](#summary)
- [Discuss about the Minimum Cost Spanning tree? Explain how to find the minimum cost spanning tree by using Prim’s algorithm with your own example.](#discuss-about-the-minimum-cost-spanning-tree-explain-how-to-find-the-minimum-cost-spanning-tree-by-using-prims-algorithm-with-your-own-example)
  - [Minimum Cost Spanning Tree (MST)](#minimum-cost-spanning-tree-mst)
  - [Prim's Algorithm](#prims-algorithm)
    - [Algorithm](#algorithm)
  - [Example](#example-2)
    - [Solution](#solution)
- [Explain how to find the minimum cost spanning tree by using Krushkal's algorithm with your own example](#explain-how-to-find-the-minimum-cost-spanning-tree-by-using-krushkals-algorithm-with-your-own-example)
  - [Kruskal’s Algorithm](#kruskals-algorithm)
    - [Algorithm](#algorithm-1)
  - [Example](#example-3)
    - [Solution](#solution-1)

## 1. Explain about the general abstraction for the Divide and Conquer Strategy

The **Divide and Conquer** strategy is a fundamental algorithm design paradigm
that breaks a problem into smaller, more manageable sub-problems, solves
each sub-problem independently, and then combines their solutions to solve
the original problem. This approach is used to tackle a variety of problems
efficiently, especially those that can be recursively divided into similar sub-problems.

### General Abstraction of Divide and Conquer Strategy

**Algorithm**:

```
Algorithm Divide(P)
{
    IF Small(P) THEN
        RETURN S(P);
    ELSE
        Divide P into smaller instances P1,P2,…….,Pk, k≥1;
        Apply Divide to each of these sub-problems;
        return Combine(Divide(P1),Divide(P2)...,Divide(Pk));
}
```

#### 1. Divide

- **Objective**: Break the original problem into smaller sub-problems.
- **Approach**: Decompose the problem into smaller instances of the same
  problem or into fundamentally different sub-problems. The division is
  often based on a recursive approach, where the problem size is reduced
  with each recursive call. The decomposition usually involves a
  partitioning of the input into smaller chunks

#### 2. Conquer

- **Objective**: Solve each of the smaller sub-problems.
- **Approach**: Recursively apply the divide and conquer strategy to each
  sub-problem until reaching a base case. The base case is a simple version
  of the problem that can be solved directly without further division.

#### 3. Combine

- **Objective**: Merge the solutions of the sub-problems to form a solution
  for the original problem.
- **Approach**: Integrate the results of the solved sub-problems to form a
  complete solution. This step usually involves combining or merging the
  sub-problems' solutions in a way that adheres to the problem's
  constraints and requirements.

### Examples of Divide and Conquer Algorithms:

#### Merge Sort

- **Divide**: Split the array into two halves.
- **Conquer**: Recursively sort each half.
- **Combine**: Merge the two sorted halves into a single sorted array.

#### Binary Search

- **Divide**: Split the search range into two halves.
- **Conquer**: Determine which half contains the target value.
- **Combine**: Repeat the process in the chosen half until the target
  value is found or the range is exhausted.

### Advantages of Divide and Conquer:

- Efficiency: Often leads to efficient algorithms with reduced time
  complexity compared to straightforward approaches.
- Simplicity: Can simplify complex problems by breaking them into
  manageable sub-problems.
- Parallelism: Sub-problems can often be solved in parallel, leveraging
  multi-core processors.

### Disadvantages:

- Overhead: Recursive calls and combining results can introduce overhead.
- Complexity: Designing and implementing divide and conquer solutions
  can be complex, especially in ensuring correct combination of sub-solutions.

---

## 2. Explain the Merge Sort Algorithm? Calculate Time Complexity of it? Draw the tree of calls of merge sort for the following set `310, 285, 179, 652, 351, 423, 861, 254, 450, 520` using merge sort algorithm and draw the tree of calls of merge sort

### Merge Sort Algorithm

**Merge Sort** is a classic sorting algorithm that follows the Divide and Conquer strategy. It sorts an array by recursively dividing it into halves, sorting each half, and then merging the sorted halves.

#### Steps of Merge Sort

1. **Divide**: Split the unsorted array into two approximately equal halves.
2. **Conquer**: Recursively sort each half.
3. **Combine**: Merge the two sorted halves to produce a single sorted array.

### Merge Sort Pseudo-Code

#### Main Merge Sort Function for Dividing

```cpp
MergeSort(arr, low, high) {
    IF low < high THEN {
        mid := (low + high) / 2
        MergeSort(arr, low, mid)        // Recursively sort the left half
        MergeSort(arr, mid + 1, high)   // Recursively sort the right half
        Merge(arr, low, mid, high)      // Merge the sorted halves
    }
}
```

#### Merge Function

```CPP
Merge(arr low, mid, high) {
    n1 := mid - low + 1       // Number of elements in the left half
    n2 := high - mid          // Number of elements in the right half

    Create leftArray[1..n1] and rightArray[1..n2]

    // Copy data to temporary arrays
    FOR i := 0 TO n1 - 1 DO {
        leftArray[i] := arr[low + i]
    }

    FOR j := 0 TO n2 - 1 DO {
        rightArray[j] := arr[mid + 1 + j]
    }

    i := 0
    j := 0
    k := low

    // Merge the temporary arrays back into A
    WHILE i < n1 AND j < n2 DO {
        IF leftArray[i] <= rightArray[j] THEN {
            arr[k] := leftArray[i]
            i := i + 1
        } ELSE {
            arr[k] := rightArray[j]
            j := j + 1
        }
        k := k + 1
    }

    // Copy the remaining elements of leftArray, if any
    WHILE i < n1 DO {
        arr[k] := leftArray[i]
        i := i + 1
        k := k + 1
    }

    // Copy the remaining elements of rightArray, if any
    WHILE j < n2 DO {
        arr[k] := rightArray[j]
        j := j + 1
        k := k + 1
    }
}
```

### Time Complexity

The time complexity of Merge Sort is indeed \( O(n \log n) \).

#### Time Complexity Analysis

1. **Divide Step**:

   - The array is divided into two halves at each level of recursion. The number of levels in the recursion tree is \( \log n \), where \( n \) is the number of elements in the array.
   - **Time Complexity for Divide Step**: \( O(\log n) \) (since division is done recursively and each division takes constant time).

2. **Merge Step**:

   - Merging two sorted halves involves combining them into a single sorted array. This process takes linear time, \( O(n) \), for each level of recursion.
   - The merging process is performed at every level of the recursion tree.

3. **Recurrence Relation**:

   - Let \( T(n) \) represent the time required to sort an array of size \( n \).
   - When the array of size \( n \) is divided, it is split into two arrays of size \( n/2 \). Thus, the time to sort these two halves is \( T(n/2) \) for each half.
   - After sorting, the two halves are merged. The merging step takes \( O(n) \) time.
   - Therefore, the recurrence relation for Merge Sort is:
     \[
     T(n) = 2 \cdot T(n/2) + c \cdot n
     \]
     Here:
     - \( 2 \cdot T(n/2) \): Time to sort two halves of size \( n/2 \).
     - \( c \cdot n \): Time to merge the two sorted halves, where \( c \) is a constant representing the time per element during merging.

4. **Solving the Recurrence Relation**:

   - **Expand the Recurrence**:
     \[
     T(n) = 2T\left(\frac{n}{2}\right) + c \cdot n
     \]
     \[
     T\left(\frac{n}{2}\right) = 2T\left(\frac{n}{4}\right) + c \cdot \frac{n}{2}
     \]
     Substituting this into the original recurrence:
     \[
     T(n) = 2 \left[2T\left(\frac{n}{4}\right) + c \cdot \frac{n}{2}\right] + c \cdot n
     \]
     \[
     T(n) = 4T\left(\frac{n}{4}\right) + 2c \cdot \frac{n}{2} + c \cdot n
     \]
     \[
     T(n) = 4T\left(\frac{n}{4}\right) + c \cdot n + c \cdot n
     \]
     \[
     T(n) = 4T\left(\frac{n}{4}\right) + 2c \cdot n
     \]

   - **General Form**:
     \[
     T(n) = 2^k T\left(\frac{n}{2^k}\right) + k \cdot c \cdot n
     \]
     where \( k \) is the number of levels of recursion.

   - **Base Case**:
     When \( \frac{n}{2^k} = 1 \), \( k = \log n \):
     \[
     T(n) = 2^{\log n} T(1) + (\log n) \cdot c \cdot n
     \]
     \[
     T(n) = n \cdot T(1) + c \cdot n \cdot \log n
     \]
     Since \( T(1) \) is a constant:
     \[
     T(n) = O(n \log n)
     \]

### Example

Given the array: `[310, 285, 179, 652, 351, 423, 861, 254, 450, 520]`

1. **Divide**:

   - `[310, 285, 179, 652, 351]` and `[423, 861, 254, 450, 520]`

2. **Conquer**:

   - Recursively sort each half:
     - For `[310, 285, 179, 652, 351]`: Divide further and sort.
     - For `[423, 861, 254, 450, 520]`: Divide further and sort.

3. **Combine**:
   - Merge the sorted halves to get the final sorted array.

#### Tree of Calls for Merge Sort

_Draw The Tree By Yourself_

---

## 3. Explain the Quick Sort Algorithm? Calculate Time Complexity of it? Draw the tree of calls of Quicksort for the following set of elements, `(20, 30, 10, 40, 5, 60, 90, 45, 35, 25, 15, 55)`

### Quick Sort Algorithm

**Quick Sort** is another efficient sorting algorithm that follows the Divide and Conquer strategy. It sorts an array by selecting a "pivot" element and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. This process is then recursively applied to the sub-arrays.

#### Steps of Quick Sort

1. **Choose a Pivot**: Select an element from the array to act as the pivot.
2. **Partition**: Rearrange the array so that all elements less than the pivot come before it and all elements greater come after it.
3. **Recursively Apply**: Apply the same steps to the sub-arrays on either side of the pivot.

### Quick Sort Pseudo-Code

#### Quick Sort Function

```cpp
Algorithm QuickSort(arr, low, high)
    IF low < high THEN
        pivot := Partition(arr, low, high)  // Get the partition index
        QuickSort(arr, low, pivot - 1)      // Recursively sort the left sub-array
        QuickSort(arr, pivot + 1, high)     // Recursively sort the right sub-array
```

#### Partition Function

```cpp
Algorithm Partition(arr, low, high)
    pivot := arr[high]           // Choosing the last element as the pivot
    i := low - 1                 // Initial index for smaller element

    j := low                     // Initialize j to low
    WHILE j < high DO            // Loop until j reaches high
        IF arr[j] <= pivot THEN
            i := i + 1           // Increment index of the smaller element
            Swap(arr[i], arr[j])  // Swap arr[i] and arr[j]
        END IF
        j := j + 1               // Increment j

    Swap(arr[i + 1], arr[high])   // Place the pivot element in its correct position
    RETURN i + 1                  // Return the partitioning index

```

### Time Complexity

The time complexity of Quick Sort depends on the choice of the pivot and the partitioning of the array. Here’s an analysis:

- **Best case**: \( O(n \log n) \) (balanced partition)
- **Average case**: \( O(n \log n) \) (reasonably balanced partition)
- **Worst case**: \( O(n^2) \) (unbalanced partition, e.g., already sorted array)

#### Time Complexity Analysis

Let \( T(n) \) represent the time complexity for Quick Sort on an array of size \( n \). The partition step takes \( O(n) \) time, and then the algorithm makes two recursive calls, each for one of the sub-arrays formed by partitioning.

The recurrence relation for Quick Sort can be written as:

\[
T(n) = T(k) + T(n - k - 1) + O(n)
\]

Where:

- \( k \) is the size of the left sub-array, which depends on the pivot choice.
- \( O(n) \) is the time required for partitioning the array.

### Best Case Time Complexity:

In the best case, the pivot divides the array into two nearly equal sub-arrays, meaning both subarrays are of size \( \frac{n}{2} \).

The recurrence relation becomes:

\[
T(n) = 2T\left(\frac{n}{2}\right) + O(n)
\]

This is a standard recurrence relation that can be solved using the **Master Theorem**.

According to the Master Theorem:
\[
T(n) = aT\left(\frac{n}{b}\right) + O(n^d)
\]
where \( a = 2 \), \( b = 2 \), and \( d = 1 \).

We can calculate:

- \( \log_b a = \log_2 2 = 1 \)
- Since \( d = 1 \), the case matches \( \log_b a \), so the time complexity is:

\[
T(n) = O(n \log n)
\]

Thus, the best-case time complexity is \( O(n \log n) \).

### Average Case Time Complexity:

In the average case, the pivot divides the array into two sub-arrays where the sizes of the sub-arrays are not necessarily equal but reasonably balanced. On average, the pivot splits the array into two parts of size \( \frac{n}{4} \) and \( \frac{3n}{4} \).

The recurrence is approximately:

\[
T(n) = T\left(\frac{n}{4}\right) + T\left(\frac{3n}{4}\right) + O(n)
\]

This recurrence also solves to \( O(n \log n) \) in the average case using more detailed methods of recurrence analysis like the **recursion tree method** or **substitution method**.

Thus, the average-case time complexity is also \( O(n \log n) \).

### Worst Case Time Complexity:

In the worst case, the pivot always divides the array into the smallest possible sub-array (e.g., one sub-array contains only one element and the other contains the remaining \( n - 1 \) elements). This happens if the array is already sorted or nearly sorted and we choose the first or last element as the pivot.

The recurrence relation in the worst case becomes:

\[
T(n) = T(n - 1) + O(n)
\]

This is a recurrence for a linear-time algorithm, and it can be solved by **unrolling the recurrence**:

\[
T(n) = T(n - 1) + O(n)
= T(n - 2) + O(n - 1) + O(n)
= \dots
= T(1) + O(2) + \dots + O(n)
= O(n^2)
\]

Thus, the worst-case time complexity is \( O(n^2) \).

### Example

Given the array: `[20, 30, 10, 40, 5, 60, 90, 45, 35, 25, 15, 55]`

#### Tree of Calls for Quick Sort

_Draw The Tree By Yourself_

---

## 4. Explain about the Process of Tiling the Defective Chess Board with neat Diagrams

Tiling a defective chessboard is an interesting problem in combinatorics and algorithms. The goal is often to cover the board completely with tiles, given that one square (or more) of the board are defective or unusable. Let me walk you through the process with diagrams.

### Problem Definition

Given a chessboard of size \(2^n \times 2^n\) where \(n \geq 1\) (a power of 2), some squares are defective and cannot be covered with tiles. We aim to tile the entire board using L-shaped trominoes, which are tiles covering exactly 3 squares.

### Approach

1. **Initial Setup:**

   - The chessboard is typically divided into smaller sections recursively.
   - The initial board is a \(2^n \times 2^n\) board. If we consider a chessboard with a single defective cell, we aim to cover the remaining cells with trominoes.

2. **Recursive Division:**
   - **Base Case:** For \(2 \times 2\) boards with one defective cell, we can cover the remaining three cells with a single tromino.
   - **Recursive Case:** For larger boards, we divide the board into four quadrants. We handle each quadrant separately, accounting for the defective cell.

### Diagrammatic Representation

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/tiles2.png)
_An Example Input_

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/tiles3.png)
_After Placing First Tile_

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/tiles4.png)
_Recurring for the first sub-square_

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/tiles5.png)
_Shows the first step in all four sub-squares_

### Time Complexity Analysis

1. **Recursive Division:**

   - For a \(2^n \times 2^n\) board, we divide it into four \(2^{n-1} \times 2^{n-1}\) quadrants.
   - Each recursive call handles a \(2^{n-1} \times 2^{n-1}\) board.

2. **Base Case:**

   - The base case occurs when the board size is \(2 \times 2\). This case can be solved directly in constant time, \(O(1)\).

3. **Recursive Case:**
   - Each level of recursion divides the board into smaller quadrants, so the number of subproblems at each level is constant (four quadrants).
   - The size of each subproblem reduces by a factor of 4 for each recursion level.

### Time Complexity Calculation

Let \(T(n)\) be the time complexity for a \(2^n \times 2^n\) board.

- At each level of recursion, the problem size is halved, and there are four recursive calls for each \(2^{n-1} \times 2^{n-1}\) board.
- Thus, the recurrence relation is:

  \[
  T(n) = 4 \cdot T(n-1) + O(1)
  \]

  where \(O(1)\) represents the constant time to place trominoes and handle the defective cell.

- Expanding this recurrence relation:

  \[
  T(n) = 4 \cdot (4 \cdot T(n-2) + O(1)) + O(1) = 4^2 \cdot T(n-2) + 4 \cdot O(1) + O(1)
  \]

  \[
  T(n) = 4^3 \cdot T(n-3) + 4^2 \cdot O(1) + 4 \cdot O(1) + O(1)
  \]

  Continuing this pattern, we get:

  \[
  T(n) = 4^k \cdot T(n-k) + \sum\_{i=0}^{k-1} 4^i \cdot O(1)
  \]

- When \(k = n\), \(T(n) = 4^n \cdot T(0) + \sum\_{i=0}^{n-1} 4^i \cdot O(1)\).

  Since \(T(0)\) is \(O(1)\):

  \[
  T(n) = 4^n \cdot O(1) + \sum\_{i=0}^{n-1} 4^i \cdot O(1)
  \]

- The sum \(\sum\_{i=0}^{n-1} 4^i\) is a geometric series and can be simplified to:

  \[
  \sum\_{i=0}^{n-1} 4^i = \frac{4^n - 1}{3}
  \]

- Therefore, the time complexity is:

  \[
  T(n) = O(4^n) + O(4^n) = O(4^n)
  \]

### Final Time Complexity

The time complexity of tiling a defective chessboard using this recursive approach is \(O(4^n)\). This exponential time complexity arises due to the recursive nature of the problem and the four-way division at each recursion level.

---

## Discuss and write the General Control Abstraction for Greedy Technique and Find the optimal solution of the knapsack instance n = 7, M = 15, (p1, p2, …p7) = (10, 5, 15, 7, 6, 18, 3) and (w1, w2, ……w7) = (2, 3, 5, 7, 1, 4, 1).

### General Control Abstraction for the Greedy Technique

The greedy technique is a problem-solving approach that builds up a solution piece by piece, always choosing the next piece that offers the most immediate benefit. The general control abstraction for the greedy technique can be summarized in the following steps:

1. **Initialization:**

   - Start with an empty solution set.
   - Initialize any necessary variables (e.g., total value, total weight).

2. **Sorting:**

   - Sort the items based on a specific criterion that will guide the greedy choice. Common criteria include value-to-weight ratio, value, or weight.

3. **Iterative Selection:**

   - Iterate through the sorted items, and for each item, determine if it can be added to the solution without violating constraints (e.g., weight limit).
   - If the item can be added, include it in the solution and update any necessary variables (e.g., total weight and total value).

4. **Termination:**

   - Stop when all items have been considered or when no more items can be added due to constraints.

5. **Return the Solution:**
   - Return the final solution set and its associated total value.

Greedy algorithm consists of three main functions:

1. **Select**: Chooses an item from the candidate set.
2. **Feasible**: Checks if the selected item can be added to the current solution without violating constraints.
3. **Union**: Adds the item to the solution if it's feasible and updates the objective function.

### General Greedy Algorithm Pseudo code

```cpp
Algorithm Greedy (a, n) // a [1 .. n] contains the n inputs
{
    solution := 0; // Initialize the solution variable (e.g., total value or solution set)

    for i := 1 to n do // Iterate over each item in the input array
    {
        x := Select(a); // Select an item from the array (candidate set)

        if Feasible(solution, x) then // Check if the selected item is feasible
        {
            solution := Union(solution, x); // Include the item in the solution and update the objective function
        }
    }

    return solution; // Return the final solution
}
```

### Optimal Solution for the Knapsack Problem

To solve this knapsack instance using the **greedy approach** based on the **profit-to-weight ratio**, follow these steps:

### Problem parameters:

- \( n = 7 \) (number of items)
- \( M = 15 \) (maximum weight capacity of the knapsack)
- Profits: \( (p1, p2, ..., p7) = (10, 5, 15, 7, 6, 18, 3) \)
- Weights: \( (w1, w2, ..., w7) = (2, 3, 5, 7, 1, 4, 1) \)

### Step-by-step approach:

1. **Calculate the profit-to-weight ratio** for each item:
   - \( r1 = \frac{10}{2} = 5.0 \)
   - \( r2 = \frac{5}{3} \approx 1.67 \)
   - \( r3 = \frac{15}{5} = 3.0 \)
   - \( r4 = \frac{7}{7} = 1.0 \)
   - \( r5 = \frac{6}{1} = 6.0 \)
   - \( r6 = \frac{18}{4} = 4.5 \)
   - \( r7 = \frac{3}{1} = 3.0 \)

2. **Sort items by their profit-to-weight ratio** in descending order:
   - Item 5: \( r5 = 6.0 \)
   - Item 1: \( r1 = 5.0 \)
   - Item 6: \( r6 = 4.5 \)
   - Item 3: \( r3 = 3.0 \)
   - Item 7: \( r7 = 3.0 \)
   - Item 2: \( r2 = 1.67 \)
   - Item 4: \( r4 = 1.0 \)

3. **Greedily select items** while keeping track of the total weight until the knapsack is full:
   - Select **Item 5** (weight = 1, profit = 6), remaining capacity = 15 - 1 = 14
   - Select **Item 1** (weight = 2, profit = 10), remaining capacity = 14 - 2 = 12
   - Select **Item 6** (weight = 4, profit = 18), remaining capacity = 12 - 4 = 8
   - Select **Item 3** (weight = 5, profit = 15), remaining capacity = 8 - 5 = 3
   - Select **Item 7** (weight = 1, profit = 3), remaining capacity = 3 - 1 = 2

4. **Stop** when no more items can be added without exceeding the capacity.

### Selected items:
- Items: 5, 1, 6, 3, 7
- Total profit = \( 6 + 10 + 18 + 15 + 3 = 52 \)
- Total weight = \( 1 + 2 + 4 + 5 + 1 = 13 \)

### Final solution:
- **Maximum profit** = 52
- **Total weight** = 13 (within the capacity of 15)
### Summary

The greedy approach provides a quick way to approximate a solution to the knapsack problem by maximizing the value-to-weight ratio. In this case, the optimal solution involves selecting items with the highest value-to-weight ratios until the knapsack’s capacity is reached or exceeded. The optimal value obtained is 52, with a total weight of 13.

---

## Discuss about the Minimum Cost Spanning tree? Explain how to find the minimum cost spanning tree by using Prim’s algorithm with your own example.

### Minimum Cost Spanning Tree (MST)

A Minimum Cost Spanning Tree (MST) of a connected, undirected graph is a spanning tree with the minimum possible total edge weight. The graph must be connected, meaning there is a path between any pair of vertices, and the tree must include all the vertices of the graph with no cycles and the minimum total edge weight.

![](https://he-s3.s3.amazonaws.com/media/uploads/146b47a.jpg)

### Prim's Algorithm

Prim's algorithm finds the MST by growing the tree one edge at a time, always choosing the smallest edge that connects a vertex inside the tree to a vertex outside the tree.

To execute the prim’s algorithm, the inputs taken by the algorithm are the graph G {V, E}, where V is the set of vertices and E is the set of edges, and the source vertex S. A minimum spanning tree of graph G is obtained as an output.

#### Algorithm

1. Declare an array visited[] to store the visited vertices and firstly, add the arbitrary root, say S, to the visited array.

2. Check whether the adjacent vertices of the last visited vertex are present in the visited[] array or not.

3. If the vertices are not in the visited[] array, compare the cost of edges and add the least cost edge to the output spanning tree.

4. The adjacent unvisited vertex with the least cost edge is added into the visited[] array and the least cost edge is added to the minimum spanning tree output.

5. Steps 2 and 4 are repeated for all the unvisited vertices in the graph to obtain the full minimum spanning tree output for the given graph.

6. Calculate the cost of the minimum spanning tree obtained.

### Example

![](https://www.tutorialspoint.com/data_structures_algorithms/images/prims_minimum_spanning_tree.jpg)

#### Solution

**Step-1**
Create a visited array to store all the visited vertices into it.

\( V = \{\} \)

The arbitrary root is mentioned to be S, so among all the edges that are connected to S we need to find the least cost edge.

\[
S → B = 8
\]

\[
V = \{S, B\}
\]

![](https://www.tutorialspoint.com/data_structures_algorithms/images/s_to_b.jpg)

**Step-2**

Since \(B\) is the last visited, check for the least cost edge that is connected to the vertex \(B\).

\[
B → A = 9
\]

\[
B → C = 16
\]

\[
B → E = 14
\]

Hence, \(B → A\) is the edge added to the spanning tree.
\[
V = \{S, B, A\}
\]

![](https://www.tutorialspoint.com/data_structures_algorithms/images/b_to_a.jpg)

**Step-3**

Since A is the last visited, check for the least cost edge that is connected to the vertex A.

\[A → C = 22\]

\[A → B = 9\]

\[A → E = 11\]

But \(A → B\) is already in the spanning tree, check for the next least cost edge. Hence, \(A → E\) is added to the spanning tree.

\[
V = \{S, B, A, E\}
\]

![](https://www.tutorialspoint.com/data_structures_algorithms/images/a_to_e.jpg)

**Step-4**

Since \(E\) is the last visited, check for the least cost edge that is connected to the vertex E.

\[E → C = 18\]

\[E → D = 3\]
Therefore, \(E → D\) is added to the spanning tree.

\[
V = \{S, B, A, E, D\}
\]
![j](https://www.tutorialspoint.com/data_structures_algorithms/images/e_to_d.jpg)
**Step-5**

Since D is the last visited, check for the least cost edge that is connected to the vertex D.

\[D → C = 15\]
\[E → D = 3\]
Therefore, \(D → C\) is added to the spanning tree.

\[
V = \{S, B, A, E, D, C\}
\]
![n](https://www.tutorialspoint.com/data_structures_algorithms/images/d_to_c.jpg)

The minimum spanning tree is obtained with the minimum cost \( = 46 \).

---

## Explain how to find the minimum cost spanning tree by using Krushkal's algorithm with your own example

### Kruskal’s Algorithm

Kruskal's algorithm finds the MST by sorting all edges in ascending order of weight and then adding the smallest edge to the MST, provided it does not form a cycle. This process continues until the MST includes all vertices.

#### Algorithm

1. Sort all the edges in the graph in an ascending order and store it in an array edge[].
2. Construct the forest of the graph on a plane with all the vertices in it.
3. Select the least cost edge from the edge[] array and add it into the forest of the graph. Mark the vertices visited by adding them into the visited[] array.
4. Repeat the steps 2 and 3 until all the vertices are visited without having any cycles forming in the graph
5. When all the vertices are visited, the minimum spanning tree is formed.
6. Calculate the minimum cost of the output spanning tree formed.

### Example

![h](https://www.tutorialspoint.com/data_structures_algorithms/images/kruskals_algorithm_graph.jpg)

#### Solution

As the first step, sort all the edges in the given graph in an ascending order and store the values in an array.

| Edge | B→D | A→B | C→F | F→E | B→C | G→F | A→G | C→D | D→E | C→G |
| ---- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Cost | 5   | 6   | 9   | 10  | 11  | 12  | 15  | 17  | 22  | 25  |

Then, construct a forest of the given graph on a single plane.

![h](https://www.tutorialspoint.com/data_structures_algorithms/images/single_plane.jpg)
\[ B \rightarrow D = 5 \]

\[ \text{Minimum cost} = 5 \]

\[ \text{Visited array}, \mathbf{v} = \{ B, D \} \]

![kk](https://www.tutorialspoint.com/data_structures_algorithms/images/sorted_edge_costs.jpg)

Similarly, the next least cost edge is \( B \rightarrow A = 6 \); so we add it onto the output graph.

\[
\text{Minimum cost} = 5 + 6 = 11
\]

\[
\text{Visited array}, \mathbf{v} = \{ B, D, A \}
\]

![h](https://www.tutorialspoint.com/data_structures_algorithms/images/graph_b_to_a.jpg)
The next least cost edge is \( C \rightarrow F = 9 \); add it onto the output graph.

\[
\text{Minimum Cost} = 5 + 6 + 9 = 20
\]

\[
\text{Visited array}, \mathbf{v} = \{ B, D, A, C, F \}
\]
![h](https://www.tutorialspoint.com/data_structures_algorithms/images/graph_c_to_f.jpg)
The next edge to be added onto the output graph is \( F \rightarrow E = 10 \).

\[
\text{Minimum Cost} = 5 + 6 + 9 + 10 = 30
\]

\[
\text{Visited array}, \mathbf{v} = \{ B, D, A, C, F, E \}
\]

![hh](https://www.tutorialspoint.com/data_structures_algorithms/images/output_graph_e_to_f.jpg)
The next edge from the least cost array is \( B \rightarrow C = 11 \), hence we add it to the output graph.

\[
\text{Minimum Cost} = 5 + 6 + 9 + 10 + 11 = 41
\]

\[
\text{Visited array}, \mathbf{v} = \{ B, D, A, C, F, E \}
\]
![j](https://www.tutorialspoint.com/data_structures_algorithms/images/least_cost_array.jpg)
The last edge from the least cost array to be added to the output graph is \( F \rightarrow G = 12 \).

\[
\text{Minimum Cost} = 5 + 6 + 9 + 10 + 11 + 12 = 53
\]

\[
\text{Visited array}, \mathbf{v} = \{ B, D, A, C, F, E, G \}
\]
![jj](https://www.tutorialspoint.com/data_structures_algorithms/images/output_graph_f_to_g.jpg)
The obtained result is the minimum spanning tree of the given graph with cost = 53.

---

<br>
<div align='center'>
  <a href='https://github.com/omteja04'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
