#include<iostream>

// runtime polymorphism
class Base
{
    public:
        virtual void show()
        {
            std::cout<<"Base class show function\n";
        }

};

class Derived: public Base
{
    public:
        void show() override
        {
            std::cout<<"Derived show function\n";
        }
};


// compile time polymorphism
// function overloading 
class Overload
{
    public:
        void display(int n)
        {
            std::cout<<"Integer: "<<n<<std::endl;
        }

        void display(double d)
        {
            std::cout<<"Integer: "<<d<<std::endl;
        }

        void display(const std::string& str_)
        {
            std::cout<<"Integer: "<<str_<<std::endl;
        }
};


// Operator Overloading
class OperatorOverload
{
    private:
        float real, imag;
    public:
        // constructor with initialization list
        OperatorOverload(float r=0, float i=0) : real(r), imag(i) {}

        OperatorOverload operator + (const OperatorOverload& object_)
        {
            return OperatorOverload(real+object_.real, imag+object_.imag);
        }

        void display()
        {
            std::cout<<"Real: "<<real<<" Imaginary: "<<imag<<"\n";
        }

};


int main()
{

    std::cout<<"Run time polymorphism\n";
    Base *base_ptr;

    Derived derived_class;

    base_ptr = &derived_class;

    std::cout<<"Calling func of derived by pointer of base class type\n\n";

    base_ptr->show();
    Overload ov;

    ov.display(10);
    ov.display(10.1231);
    ov.display("Overload String!!");

    std::cout<<"\n\n\t\tInstance of Operator Overloading (+) \n";
    OperatorOverload c1(3.5, 1.12), c2(23.23, 10.34);
    c1.display();
    c2.display();
    OperatorOverload c3 = c1+c2;

    c3.display();

    return 0; 
}


