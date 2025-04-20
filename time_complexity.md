## Time Complexity

Big O      | Name | Example Use Case
|:---------|:--------:|---------:|
O(1)       | Constant time | Accessing an array element: arr[i]
O(log n)   | Logarithmic time | Binary search
O(n)       | Linear time | Looping through an array
O(n log n) | Linearithmic | Merge sort, Quick sort (avg case)
O(n²)      | Quadratic | Nested loops (e.g., bubble sort)
O(2ⁿ)      | Exponential | Recursive Fibonacci, brute-force problems
O(n!)      | Factorial | Permutations (e.g., traveling salesman)


## Master Theorem (for divide & conquer)

### T(n) = aT(n/b) + f(n)
Example: Merge sort
T(n) = 2T(n/2) + O(n)

### how to run namesapce
```
 g++ -o my_program.exe intro_namespace.cpp math_utils.cpp 

```