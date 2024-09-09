- [1. Explain different Criteria of an Algorithm and Discuss about the Time and Space Complexities. Discuss about the Amortized Analysis.](#1-explain-different-criteria-of-an-algorithm-and-discuss-about-the-time-and-space-complexities-discuss-about-the-amortized-analysis)
  - [Criteria of an Algorithm](#criteria-of-an-algorithm)
  - [Performance Analysis of an Algorithm](#performance-analysis-of-an-algorithm)
    - [1. Time Complexity](#1-time-complexity)
    - [2. Space Complexity](#2-space-complexity)
  - [Amortized Analysis](#amortized-analysis)
    - [Key Types of Amortized Analysis:](#key-types-of-amortized-analysis)
    - [Example of Amortized Analysis: `Dynamic Array`](#example-of-amortized-analysis-dynamic-array)
- [2. Write about the Pseudo Code Conventions? And Explain about different Asymptotic notations with examples?](#2-write-about-the-pseudo-code-conventions-and-explain-about-different-asymptotic-notations-with-examples)
  - [Pseudo Code Conventions](#pseudo-code-conventions)
  - [Asymptotic Notations (with Examples)](#asymptotic-notations-with-examples)
    - [1. Big O Notation (O):](#1-big-o-notation-o)
    - [2. Omega Notation (Ω):](#2-omega-notation-ω)
    - [3. Theta Notation (Θ):](#3-theta-notation-θ)
- [3. Discuss about the Recursion and Design an algorithm to solve the towers of Hanoi problem.](#3-discuss-about-the-recursion-and-design-an-algorithm-to-solve-the-towers-of-hanoi-problem)
  - [Recursion](#recursion)
    - [Key characteristics of recursion:](#key-characteristics-of-recursion)
  - [Tower of Hanoi Problem](#tower-of-hanoi-problem)
    - [Rules](#rules)
  - [Algorithm](#algorithm)
  - [Pseudo Code](#pseudo-code)
    - [Explanation of the Pseudo Code:](#explanation-of-the-pseudo-code)
  - [Time Complexity:](#time-complexity)
  - [Space Complexity:](#space-complexity)
- [4. Discuss about the Randomized Algorithms? Build the randomized algorithm for Selection Sort?](#4-discuss-about-the-randomized-algorithms-build-the-randomized-algorithm-for-selection-sort)
  - [Randomized Algorithms](#randomized-algorithms)
  - [Characteristics of Randomized Algorithms:](#characteristics-of-randomized-algorithms)
  - [Randomized Algorithm for Selection Sort](#randomized-algorithm-for-selection-sort)
  - [Randomized Selection Sort Algorithm:](#randomized-selection-sort-algorithm)
  - [Pseudo Code:](#pseudo-code-1)
  - [Explanation of Pseudo Code:](#explanation-of-pseudo-code)

## 1. Explain different Criteria of an Algorithm and Discuss about the Time and Space Complexities. Discuss about the Amortized Analysis.

### Criteria of an Algorithm

An algorithm is judged by various criteria to determine its efficiency and correctness. The primary factors include:

1. **Input/Output**: An algorithm must take 0 or more arguments as input & should produce at least one output.
2. **Finiteness**: An algorithm should terminate in a finite number of instructions.
3. **Definiteness/Unambiguous**: Each instruction must be clear and unambiguous.
4. **Effectiveness**: Algorithm should contain only necessary steps it should not contain any unnecessary statements.
5. **Generality**: Algorithm should run for any type of input and data (it must satisfy all the cases).

### Performance Analysis of an Algorithm

An algorithm is said to be efficient and fast if it takes less time to execute and consume less memory/space.
In order to analyze performance of an algorithm we use:

1. Time Complexity
2. Space Complexity

#### 1. Time Complexity

The time needed by an algorithm expressed as a function of the size of a problem is called the _time complexity_ of the algorithm. The time complexity of a program is the amount of computer time it needs to run to completion. It is often expressed in terms of Big-O notation.

- **O(1) (Constant Time)**: The time required does not depend on the input size. Example: Accessing an element in an array.
- **O(log n) (Logarithmic Time)**: The time grows logarithmically with the input size. Example: Binary search.
- **O(n) (Linear Time)**: The time grows directly in proportion to the input size. Example: Traversing an array.
- **O(n log n)**: Example: Merge Sort and Quick Sort (average case).
- **O(n^2) (Quadratic Time)**: The time grows quadratically as the input size increases. Example: Nested loops in a bubble sort.
- **O(2^n) (Exponential Time)**: Time doubles with each increment in input size. Example: Solving the Tower of Hanoi problem.
- **O(n!) (Factorial Time)**: Time complexity for problems like the traveling salesman, where all permutations of the input are considered.

#### 2. Space Complexity

The space needed by an algorithm expressed as a function of the size of the problem is called the _space complexity_ of the algorithm. The space complexity of a program is the amount of memory or storage it needs to run to completion, including both the memory required for the input data, auxiliary variables, and the call stack used during execution. It is also expressed in terms of Big-O notation.

- **O(1) (Constant Space)**: The algorithm uses a fixed amount of space regardless of input size. Example: Variables storing results.
- **O(n) (Linear Space)**: The space required grows in direct proportion to the input size. Example: Arrays, linked lists.
- **O(n^2) (Quadratic Space)**: Algorithms that need to store a matrix or table where both dimensions grow with the input size. Example: Dynamic programming approaches using 2D arrays.

### Amortized Analysis

Amortized analysis is a method used to analyze the average time complexity of an operation over a sequence of operations, even if a single operation can be expensive. It guarantees an average time per operation, ensuring that the algorithm remains efficient in practice.

#### Key Types of Amortized Analysis:

1. **Aggregate Method**: Calculates the average cost per operation by dividing the total cost of all operations by the number of operations. Example: Inserting elements into a dynamic array, where resizing happens occasionally, has an average constant cost.

2. **Accounting Method**: Assigns a charge to each operation that covers both its own cost and future expensive operations, ensuring expensive ones are "prepaid" by cheaper ones. Example: Inserting into a dynamic array charges extra to cover future resizing.

3. **Potential Method**: Uses a potential function to track the "stored" resources in the data structure. Expensive operations reduce potential, while cheaper ones increase it, keeping the total cost balanced.

> for more explanation [See This](./TypesOfAmortizedAnalysis.md)

#### Example of Amortized Analysis: `Dynamic Array`

Inserting an element into a dynamic array takes constant time `O(1)` in most cases. However, when the array is full, it must be resized, which takes linear time `O(n)` where `n` is the current size of the array. By analyzing the cost of multiple insertions (accounting for resizing), the average cost (amortized) of an insertion remains `O(1)` despite the occasional expensive resizing operation.

## 2. Write about the Pseudo Code Conventions? And Explain about different Asymptotic notations with examples?

### Pseudo Code Conventions

**Pseudo code** is a simplified way of writing algorithms that does not strictly follow any particular programming language but still represents the logic of the algorithm. It helps in communicating ideas and logic more clearly before converting them into actual code. Here are some common pseudo code conventions:

- Comments begin with // and continue until the end of line.
- Blocks are indicated with matching braces `{` `}`
- An identifier begins with a letter. The data types of variables are not explicitly declared.
- Compound data types can be formed with records. Here is an example

  ```cpp
  Node Record
  {
    datatype–1 data-1;
    .
    .
    .
    datatype–n data – n;
    node* link;
  }
  //Here link is a pointer to the record type node.
  //Individual data items of a record can be accessed with -> and period(.)
  ```

- Assignment of values to variables is done using the assignment statement
  - `<variable>:= <expression>;`
- There are two Boolean values TRUE and FALSE.
- Logical Operators AND, OR, NOT
- Relational Operators <, <=,>,>=, =, !=
- The following looping statements are employed. FOR, WHILE and REPEAT-UNTIL
  - **FOR Loop**
  ```cpp
  FOR variable := value-1 to value-2 do
  {
    (statement 1)
    ...
    ...
    ...
    (statement n)
  }
  ```
  - **WHILE Loop**
  ```cpp
  WHILE (condition) do
  {
    (statement 1)
    ...
    ...
    ...
    (statement n)
  }
  ```
  - **REPEAT-UNTIL**
  ```cpp
  REPEAT
  {
    (statement 1)
    ...
    ...
    ...
    (statement n)
  }
  UNTIL (condition);
  ```
- A conditional statement has the following forms.
  ```cpp
  IF <condition> THEN
    `<statement-1> `
  ```
  ```cpp
  IF <condition> THEN
    `<statement-1> `
  ELSE
    `<statement-1>`
  ```
- Input and output are done using the instructions read & write.
- Algorithm Structure:
  ```cpp
  Algorithm AlgorithmName (parameters)
  {
    setOfStatements
    RETURN (takeaways);
  }
  ```
  **Example:**
  ```cpp
  Algorithm Max(arr, n) // arr is an array of size n.
  {
    result := arr[1];
    FOR i: = 2 to n do
    {
        IF arr[i] > result THEN
        {
          result := arr[i];
        }
    }
    RETURN result;
  }
  ```

### Asymptotic Notations (with Examples)

**Asymptotic notations** describe the behavior of an algorithm’s time and space
complexity as the input size grows. They are particularly useful for analyzing
performance and scalability.

#### 1. Big O Notation (O):

- **Definition:** Represents the upper bound or worst-case time
  complexity of an algorithm. It indicates the maximum time or
  space an algorithm will take as the input grows.
- **Example:**
  A linear search on an array of n elements has a time complexity of
  O(n). In the worst case, the algorithm might need to examine
  every element.

#### 2. Omega Notation (Ω):

- **Definition:** Represents the lower bound or best-case time
  complexity of an algorithm. It indicates the minimum time an
  algorithm takes.
- **Example:**
  In linear search, the best-case time complexity is Ω(1), as the first
  element might be the target, resulting in constant time.

#### 3. Theta Notation (Θ):

- **Definition:** Represents both the upper and lower bounds, meaning
  the algorithm runs in the same time complexity in both the best
  and worst cases.
- **Example:**
  Merge sort has a time complexity of Θ(n logn), which applies
  consistently to both the best and worst cases.

---

## 3. Discuss about the Recursion and Design an algorithm to solve the towers of Hanoi problem.

### Recursion

**Recursion** is a programming technique where a function calls itself to solve smaller instances of the same problem. It is often used to break complex problems down into more manageable sub-problems, which are then solved in a repeated manner until a base condition is met.

#### Key characteristics of recursion:

**Base Case:** A condition that stops the recursion.
**Recursive Case:** The part of the function where it calls itself with modified arguments to approach the base case.
**Recursive Structure:** Each recursive call reduces the problem size, eventually converging on the base case.

### Tower of Hanoi Problem

The **Towers of Hanoi** is a classic recursive problem where you have three rods and `n` disks of different sizes, stacked in ascending order of size on one rod (source). The goal is to move the entire stack to another rod (destination), obeying the following rules:
![](https://www.tutorialspoint.com/data_structures_algorithms/images/tower_of_hanoi.jpg)

#### Rules

1. Only one disk can be moved at a time.
2. A disk can only be moved to the top of another rod.
3. No larger disk can be placed on top of a smaller disk.

### Algorithm

The problem can be broken down as follows:

- Move the top `n-1` disks from the source to the helper rod.
- Move the nth (largest) disk from the source to the destination rod.
- Move the `n-1` disks from the helper rod to the destination rod.

This recursive structure allows us to solve the Towers of Hanoi problem for any number of disks.

> Tower of Hanoi puzzle with n disks can be solved in minimum \(2^{(n−1)}\) steps.

![](https://www.tutorialspoint.com/data_structures_algorithms/images/tower_of_hanoi.gif)

### Pseudo Code

```cpp

Algorithm TowerOfHanoi(disk, source, destination, helper)

  IF disk == 1, THEN
  {
    move disk from source to destination
  }

  ELSE
  {
    TowerOfHanoi(disk - 1, source, helper, destination)     // Step 1
    move disk from source to destination          // Step 2
    TowerOfHanoi(disk - 1, helper, destination, source)     // Step 3
  }
```

#### Explanation of the Pseudo Code:

- **Base Case**: When `n == 1`, the function moves the disk from source to destination.
- **Recursive Case**:
  1. The function calls itself to move `n-1` disks from the `source` to the `helper` rod, using the `destination` rod as a temporary holder.
  2. The nth (largest) disk is moved directly from the `source` rod to the `destination` rod.
  3. Finally, the function recursively moves the `n-1` disks from the `helper` rod to the `destination` rod, using the `source` rod as a temporary holder.

### Time Complexity:

The time complexity of the Towers of Hanoi algorithm is **O(2^n)** because for each disk, you first need to move `n-1` disks twice (once to the helper rod and then to the destination), plus one move for the nth disk. The number of moves required is \(2^n - 1\), which makes the time complexity exponential.

### Space Complexity:

The space complexity is **O(n)** due to the recursive call stack depth of `n` in the worst case, where `n` is the number of disks.

---

## 4. Discuss about the Randomized Algorithms? Build the randomized algorithm for Selection Sort?

### Randomized Algorithms

**Randomized algorithms** are algorithms that use random numbers at some point during their execution to make decisions. This randomness can help in making the algorithm more efficient or simpler in solving problems, particularly when deterministic algorithms may be complex or inefficient.

Randomized algorithms can be classified into two categories:

1. **Las Vegas Algorithms**: These algorithms always produce a correct result, but their runtime may vary based on the random choices made. The correctness of the solution is guaranteed, but the efficiency might differ across runs.
   - Example: Randomized QuickSort.
2. **Monte Carlo Algorithms**: These algorithms have a probabilistic guarantee of correctness. They may produce an incorrect result with some small probability, but usually, the algorithm runs faster than deterministic alternatives.
   - Example: Randomized primality test.

### Characteristics of Randomized Algorithms:

- **Simplicity**: Randomness often leads to simpler algorithms.
- **Efficiency**: Randomized algorithms can sometimes outperform deterministic algorithms by avoiding worst-case scenarios.
- **Probabilistic Guarantees**: The performance or correctness is analyzed using probability, often with expected time complexity or error bounds.

---

### Randomized Algorithm for Selection Sort

In the classic **Selection Sort**, we iterate through the array and for each position, find the smallest element from the unsorted part of the array and swap it with the current position. This makes the algorithm deterministic with a time complexity of **O(n²)** in all cases.

To introduce randomness into Selection Sort, we can randomly pick an element from the unsorted portion of the array instead of deterministically selecting the minimum element. This doesn't make the algorithm more efficient in terms of worst-case time complexity, but it serves as an example of how randomness can be incorporated into sorting algorithms.

### Randomized Selection Sort Algorithm:

1. **Step 1**: For each position in the array, randomly select an element from the unsorted part of the array.
2. **Step 2**: Swap the randomly chosen element with the current element.
3. **Step 3**: Continue until the entire array is sorted.

### Pseudo Code:

```cpp
RandomizedSelectionSort(arr, n)
    for i = 0 to n-1
        // Randomly select an index from the unsorted portion
        randIndex = Random(i, n-1)

        // Swap the randomly chosen element with the current element
        Swap(arr[i], arr[randIndex])

        // Find the minimum element from the unsorted portion
        minIndex = i
        for j = i+1 to n-1
            if arr[j] < arr[minIndex]
                minIndex = j

        // Swap the found minimum element with the current element
        Swap(arr[i], Arr[minIndex])
```

### Explanation of Pseudo Code:

1. **Outer Loop**: The outer loop runs from `i = 0` to `n-1`. At each iteration, we process one element from the array.
2. **Random Selection**: A random index `randIndex` is selected from the unsorted part of the array (from `i` to `n-1`), and the element at that index is swapped with the current element at position `i`.
3. **Finding the Minimum**: After the random swap, we then use the usual deterministic approach of selection sort to find the smallest element in the unsorted portion and swap it with the current element at index `i`.

---

<br>

<div align='center'>
  <a href='https://github.com/omteja04'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
