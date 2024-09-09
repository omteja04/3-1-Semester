- [Explain different Criteria of an Algorithm and Discuss about the Time and Space Complexities. Discuss about the Amortized Analysis.](#explain-different-criteria-of-an-algorithm-and-discuss-about-the-time-and-space-complexities-discuss-about-the-amortized-analysis)
  - [Criteria of an Algorithm](#criteria-of-an-algorithm)
  - [Performance Analysis of an Algorithm](#performance-analysis-of-an-algorithm)
    - [1. Time Complexity](#1-time-complexity)
    - [2. Space Complexity](#2-space-complexity)
  - [Amortized Analysis](#amortized-analysis)
    - [Key Types of Amortized Analysis:](#key-types-of-amortized-analysis)
    - [Example of Amortized Analysis: `Dynamic Array`](#example-of-amortized-analysis-dynamic-array)
- [Inserting an element into a dynamic array takes constant time `O(1)` in most cases. However, when the array is full, it must be resized, which takes linear time `O(n)` where `n` is the current size of the array. By analyzing the cost of multiple insertions (accounting for resizing), the average cost (amortized) of an insertion remains `O(1)` despite the occasional expensive resizing operation.](#inserting-an-element-into-a-dynamic-array-takes-constant-time-o1-in-most-cases-however-when-the-array-is-full-it-must-be-resized-which-takes-linear-time-on-where-n-is-the-current-size-of-the-array-by-analyzing-the-cost-of-multiple-insertions-accounting-for-resizing-the-average-cost-amortized-of-an-insertion-remains-o1-despite-the-occasional-expensive-resizing-operation)
- [Write about the Pseudo Code Conventions? And Explain about different Asymptotic notations with examples?](#write-about-the-pseudo-code-conventions-and-explain-about-different-asymptotic-notations-with-examples)
  - [Pseudo Code Conventions](#pseudo-code-conventions)
  - [Asymptotic Notations (with Examples)](#asymptotic-notations-with-examples)
    - [1. Big O Notation (O):](#1-big-o-notation-o)
    - [2. Omega Notation (Ω):](#2-omega-notation-ω)
    - [3. Theta Notation (Θ):](#3-theta-notation-θ)

## Explain different Criteria of an Algorithm and Discuss about the Time and Space Complexities. Discuss about the Amortized Analysis.

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

## Inserting an element into a dynamic array takes constant time `O(1)` in most cases. However, when the array is full, it must be resized, which takes linear time `O(n)` where `n` is the current size of the array. By analyzing the cost of multiple insertions (accounting for resizing), the average cost (amortized) of an insertion remains `O(1)` despite the occasional expensive resizing operation.

## Write about the Pseudo Code Conventions? And Explain about different Asymptotic notations with examples?

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

