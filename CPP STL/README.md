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

#### Containers:

    - data structure to store

#### Iterators:

    - allow traversals of containers

#### Algorithms

    - implement operations
        - sort, search, modify, count
    - defined in algorithm.h

#### Functors

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
