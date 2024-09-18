/*
This program demonstrates use of namespace and how it avoids clashes over similar names of functions or more
*/
#include<iostream>

namespace MiscFunc
{
    int add(int a, int b)
    {
        return a+b;
    }

    int multiply(int a, int b)
    {
        return a*b;
    }
}

namespace NextFunc
{
    int add(int a, int b)
    {
        return a+b*10;
    }
}

class Calc
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
};

void NamespaceFunc()
{
    std::cout<<"Using Namespace:\n";
    int result1 = MiscFunc::add(5, 10); 
    int result2 = NextFunc::add(5, 10); 

    std::cout<<"Calling same function name, results are different as:"<<result1<<"\t"<<result2<<"\n";
}

int main()
{
    NamespaceFunc();
    Calc calculator;
    std::cout<<"\nUsing classes:\n";
    std::cout<<calculator.add(23,2)<<"\n";

    return 0;
}