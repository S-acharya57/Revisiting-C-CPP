# include<iostream>

class Animal
{
    public:
        virtual void eat()
        {
            std::cout<<"Eating generic food\n";
        }
};

class Cat : public Animal
{
    public:
        void eat()
        {
            std::cout<<"Eating rat\n";
        }
};

class Dog : public Animal
{
    public:
        void eat()
        {
            std::cout<<"Eating bone!\n";
        }
};

// this function can work for all animals
// no need to type it separately for all
// use of virtual function in Base class 'Animal'
void eat_func(Animal *animal_)
{
    animal_->eat();
}


int main()
{
    Animal *animal_ptr;

    Cat cat;
    Dog dog;

    animal_ptr = &cat;
    eat_func(animal_ptr);

    animal_ptr = &dog;
    eat_func(animal_ptr);
    return 0;
}