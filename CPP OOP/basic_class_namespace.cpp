/*
This program contains basic implementation of classes and namespaces in CPP language!
*/
#include<iostream>


// declaring a namespace
namespace Maths
{
    int add(int a, int b)
    {
        return a+b;
    }

    int operationCount = 0;

    void displayOprCount()
    {
        std::cout<<"\nOperation Count: "<<operationCount<<std::endl;
    }
}

class Calculator
{
    private:
        std::string model; 
        int calculationCount;

    public:
        // constructor with initialization
        Calculator(std::string modelName) : model(modelName), calculationCount(0) {}

        int add(int a, int b)
        {
            return a+b;
        }

        void showDetails()
        {
            std::cout << "Calculator Model: " << model << "\n";
            std::cout << "Calculations Performed: " << calculationCount << std::endl;
    }
};


int main() 
{
    std::cout << "Using Namespace:" << std::endl;

    int result_namespace = Maths::add(5,3);
    
    // incrementing the count of operation on the namespace
    Maths::operationCount++;
    std::cout << "Result from namespace function: " << result_namespace << std::endl;
    Maths::displayOprCount();

    std::cout << "\nUsing Class:" << std::endl;

    Calculator calc("CASIO");
    int result_class = calc.add(55,33);

    std::cout << "Result from class method: " << result_class << std::endl;
    calc.showDetails();

    return 0;
}
