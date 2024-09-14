## STL (Standard Template Library)

- set of tools in CPP
- quick coding and efficiency
- generic way

* Generic Programming

  - data types are not specified
  - compile time polymorphism?

    - specifying data types at instant times

      - during compile time

    - efficient than runtime polymorphism
      - CPU cycles are consumed in it

### Components of STL

1. Containers
2. Iterators
3. Algorithms
4. Functors

#### 1. Containers:

    - data structure to store
    - Types:
      1 Sequence
        : data elements are stored here
        : vectors, stack, array, queue


      2 Associative
        : increment associative arrays, key and value
        : use of key to access values

          - Ordered : incremented with help of balanced binary tree
                    : height = log(n), n is height of tree
                    : e.g. map, multimap, set, multiset

          - Unordered : incremented using hash table
                      : O(1) as operation time
                      : unordered set, unordered map, ...

##### Vector:

- dynamic size array
- keeps doubling size of array when the number of elements is higher than the memory allocated at first

##### Array:

- fixed size array

##### List:

- `std::list`
- doubly linked list
- pointer for before and after

##### Forward_list

- singly linked list
- only next pointer is there

##### Deque

- Double ended queue
- supports push and pop at both ends
- not stored contiguously, but stored as chunks of contiguous data

##### Container Adapters

- they are **templates** as well
- interfaces that implement special functionality on top of sequential containers
- Stack: with deque
- Queue: with deque
- Priority Queue: deques the element with highest priority
  - by heap
  - underlying container: vector
  - `priority_queue(vector<int> int, )`

##### Set(unordered):

- no duplicates
- unique elements as keys

#### Map:

- pairs
- (x, y)
  - `x:key, y:value`

#### 2. Iterators:

    - allow traversals of containers

#### 3. Algorithms

    - implement operations
        - sort, search, modify, count
    - defined in algorithm.h

#### 4. Functors

    - acts just like a function but has advantages that it is stateful

    Stateful:
        - it can keep data reflecting its state between calls

    - function objects
    - classes that can be used as functions
    - include functional.h

    - std::plus, std::minus, etc.

**In the programs, there is instances of:**

- initializer list of constructors
- functor calls with STL functions like count_if
  - Functionality of Count_if, uses a new copy of functor
  - use of std::ref to pass the object without any new copy, i.e. with reference.
