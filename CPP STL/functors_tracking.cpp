#include<iostream>
#include<vector>
#include<algorithm>


class GreaterThan
{
    int threshold;
    int count;
    
public:
    // initializer list
    // ensures member variables are initialized when the object is created
    GreaterThan(int t) : threshold(t), count(0) 
    {
    }

    bool operator()(int value)
    {
        if(value>threshold)
        {
            count++;
            return true;
        }
        return false;
    }

    
    int getCount()
    {
        return count;
    }

};

int main()
{
    std::vector<int> numbers = {1,23,32,34,4,3,34,23,443};


    GreaterThan greaterThan10(10);
    // initially, greaterThan10 has threshold=10, count=0

    // count_if: iterates through the numbers vector and applues greaterThan10 functor to each element
    // checks if each element is greater than 10
    // count_if makes a copy of the class, hence the count is not displayed 
    int greaterThanCount = std::count_if(numbers.begin(), numbers.end(), greaterThan10);


    std::cout << "Numbers greater than 10: " << greaterThanCount << std::endl;
    
    // this returns 0 since the call was made on the copy, not the original object
    std::cout << "Functor called " << greaterThan10.getCount() << " times to check values." << std::endl;



    GreaterThan greaterThan20(20);

    // passing the functor with reference using std::ref
    // std::ref wraps the functor and passes it with reference
    int greaterThanCount = std::count_if(numbers.begin(), numbers.end(), std::ref(greaterThan20));


    std::cout << "Numbers greater than 20: " << greaterThanCount << std::endl;

    // Now this will work as the getCount is updated since the count is made on the same object.
    std::cout << "Functor called " << greaterThan20.getCount() << " times to check values." << std::endl;



    return 0;
}