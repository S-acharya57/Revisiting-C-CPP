# CPP with OOP

### Class and Namespace

#### Class

- datatypes
- extended version of structures
- contains data members and functions as members

#### Namespace

- abstract way of grouping items together
- two functions cannot be declared normally, but they can coexist if placed in separate namespaces
  `A::func(), B::func()`

- in order to not clash the identifiers
- declares a scope

  - inside which other functions, types can exist

- used to wrap up all functions and constants of al ibrary with a namespace so that it won't clash with anything else!

### Polymorphism

- many forms
- ability of something to have or to be displayed in more than one form

**1. Runtime Polymorphism**

- through the use of virtual functions and inheritance
- call derived class methods through base class pointers or references
- **dynamic polymorphism**
- which method to call, decided at runtime

- based on the actual type of the object pointed to by a base class pointer or reference
- useful for scenarios where the exact type of object cannot be known at compile time

**2. Compile time Polymorphism**

- through method overloading or operator overloading
- allows function or operator calls to be resolved at compile time based on the function signature or operator usage
- the decision about which function or operator to call is made at compile time
- binding of functions or operators is done at compile time
- faster code execution, since calls to functions/operators are resolved during compilation
