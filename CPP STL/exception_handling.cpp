// try, catch, throw
// every try should have corresponding catch block 
#include<iostream>

int main()
{
    int num, den;
    std::cout<<"Enter numerator and denominator\n";
    std::cin>>num>>den;
    float result;

    // try block has local variable
    // cannot use it globally
    try
    {
        if(den==0)
        {
            throw den;
        }
        result = num/den;
    }

    // that is being thrown is caught
    catch(int ex)
    {
        std::cout<<"Divide by zero error\n"<<ex;
    }

    std::cout<<result;


    return 0;
}