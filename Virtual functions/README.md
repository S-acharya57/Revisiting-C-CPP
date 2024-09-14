# Virtual Functions

- member function declared within base class, redefined by derived class
- called by same base class pointer
- ensure correct function is called for an object
- to achieve runtime polymorphism
- with `virtual` keyword in base class

## Pure virtual functions

- assigned 0 in declaration
-

### Abstract Class

- at least one pure virtual function is there
- when implementation is unknown
- cannot be instantiated
  - object of this class cannot be created
-
