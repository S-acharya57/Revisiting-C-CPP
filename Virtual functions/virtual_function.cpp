#include<iostream>

class Base
{
    public:
        void show()
        {
            std::cout<<"Base class show function\n";
        }

        // virtual function
        virtual void print()
        {   
            std::cout<<"Base class print function\n";
        }
};

class Derived_:public Base
{
    public:
        void show()
        {
            std::cout<<"Derived class show function\n";
        }

        // virtual function
        void print()
        {   
            std::cout<<"Derived class print function\n";
        }
};



int main()
{   
    // pointer to base class
    Base *base_ptr;
    Derived_ derived_object;

    // pointer pointing to derived object
    base_ptr = &derived_object;

    base_ptr->print();  // derived print was called
    base_ptr->show();   //base class show was called

}

