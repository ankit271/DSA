# Data Structures and Algorithms in C++

This repository contains implementations of various data structures and algorithms in C++.

## Table of Contents

### 1. Searching Algorithms
- [Linear Search](searching/linear_search.cpp)
  - Time Complexity: O(n)
  - Space Complexity: O(1)
  - Simple sequential search algorithm

- [Binary Search](searching/binary_search.cpp)
  - Time Complexity: O(log n)
  - Space Complexity: O(1)
  - Requires sorted array
  - Divide and conquer approach

### 2. Sorting Algorithms
- [Bubble Sort](sorting/bubble.cpp)
  - Time Complexity: O(n²)
  - Space Complexity: O(1)
  - In-place sorting algorithm
  - Stable sort

- [Selection Sort](sorting/selection.cpp)
  - Time Complexity: O(n²)
  - Space Complexity: O(1)
  - In-place sorting algorithm
  - Not stable sort

- [Insertion Sort](sorting/insertion.cpp)
  - Time Complexity: O(n²)
  - Space Complexity: O(1)
  - In-place sorting algorithm
  - Stable sort

- [Merge Sort](sorting/merge.cpp)
  - Time Complexity: O(n log n)
  - Space Complexity: O(n)
  - Divide and conquer algorithm
  - Stable sort
  - Efficient for large datasets

- [Quick Sort](sorting/quick.cpp)
  - Time Complexity: 
    - Average Case: O(n log n)
    - Worst Case: O(n²)
  - Space Complexity: O(log n)
  - In-place sorting algorithm
  - Efficient for large datasets
  - Generally faster in practice due to better cache performance


### 3. Data Structures
- [Linked List](linked_list.cpp)
  - Basic singly linked list implementation
  - Operations:
    - Traversal
    - Insertion at beginning
    - More operations to be added

## Getting Started

### Prerequisites
- C++ compiler (supporting C++11 or later)
- Standard Template Library (STL)

### Compilation
```bash
g++ filename.cpp -o output

## Folder Structure

DSA/
│
├── README.md
│
├── searching/
│ ├── linear_search.cpp
│ └── binary_search.cpp
│
├── sorting/
│ ├── bubble.cpp
│ ├── selection.cpp
│ ├── insertion.cpp
│ ├── merge.cpp
│ └── quick.cpp