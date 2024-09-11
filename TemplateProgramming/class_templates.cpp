#include<iostream>

// alias name T
template <typename T, typename U>
class Parent
{
    private:
        T kg;
        U grams;
    
    public:
        void setData(T x, U y)
        {
            kg=x;
            grams = y;
        }    
    

        T getDataKg()
        {
            return kg;
        }

        U getDataGram()
        {
            return grams;
        }
};


int main()
{
    Parent<int, float> obj;
    obj.setData(32, 123.1231);
    std::cout<<obj.getDataKg()<<"kg\t"<<obj.getDataGram()<<"grams\n";

    return 0;
}