#include<iostream>

// placeholder T
template <typename T>
T add(T x, T y)
{
    return x+y;
}



// int main()
// {
//     std::cout<<add<int>(3, 7)<<"\n";
//     std::cout<<add<float>(3.3f, 7.3f)<<"\n";
//     std::cout<<add<double>(3.23423, 7.2342);
    
//     return 0;
// }


template <typename T, typename U>
T add(T x, U y){
    return x+y;
}

// return type determines the type of the data returned.
template <typename T, typename U>
U add2(T x, U y){
    return x+y;
}


int main()
{
    std::cout<<add<int, double>(3, 7.34535)<<"\n";
    std::cout<<add2<int, double>(3, 7.34535)<<"\n";
    std::cout<<add<float, int>(3.3f, 7)<<"\n";
    
    return 0;
}