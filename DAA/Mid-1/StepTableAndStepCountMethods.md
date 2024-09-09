<!--
  Author: omteja04
  Created on: 09-09-2024 19:03:00
  Description: StepTableAndStepCountMethods
-->

## 1. Step Count Method

The Step Count Method involves counting the number of basic operations
(steps) that an algorithm performs relative to the size of the input. This method
provides a way to estimate the running time of an algorithm by summing up
the operations executed.

- We use a global variable named ‘count’.
- It is initialized with ‘0’.
- For every legal statement in the algorithm we introduce a count increment statement (count := count +1).

### Steps to Apply the Step Count Method:

1. **Identify Basic Operations**: Determine the basic operations that
   significantly contribute to the running time, such as comparisons,
   assignments, and arithmetic operations.
2. **Count Operations**: Analyze how many times these basic operations are
   executed as a function of the input size. Consider different parts of the
   algorithm, including loops and recursive calls.
3. **Express in Terms of Input Size (n)**: Express the total number of
   operations as a function of the input size, typically denoted as n.
4. **Determine Time Complexity**: Use `Big O` notation to describe the
   asymptotic complexity of the algorithm based on the step count.

## 2. Step-Table Method

The Step-Table Method involves creating a table that lists the steps executed by
the algorithm for different input sizes and then analyzing this table to derive
the time complexity.

- Complexity is determined by using a table which includes steps per execution(s/e) i.e. amount by which count changes as a result of execution of the statement.
- Frequency – number of times a statement is executed

### Steps to Apply the Step Table Method:

1. **Create a Step Table**: Construct a table that records the number of steps
   (operations) performed by the algorithm for different sizes of input. Each
   row of the table represents a different input size, and each column
   represents a specific step or operation.
2. **Fill the Table**: Execute the algorithm for various input sizes and record
   the number of steps for each size.
3. **Analyze Growth**: Observe how the number of steps grows as the input
   size increases. Look for a pattern or trend.
4. **Determine Big O Notation**: Based on the observed growth pattern,
   determine the time complexity in Big O notation.
