#include<iostream>

// allows to create objects that can be invoked like functions 


class Add{
    public:
        // overloading the operator ()
        int operator()(int a, int b)
        {
            return a+b;
        }
};

int main()
{
    Add add;
    int result = add(5, 3);
    std::cout<<result;
}