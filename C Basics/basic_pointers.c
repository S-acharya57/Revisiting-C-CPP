#include<stdio.h>

// accessing array with pointers using plus to get to the next location
void pointer_arithmetic() 
{
    int arr[5] = {1,2,3,5,4}; 
    int *ptr = arr;

    printf("Pointer Arithmetic: \n");

    int i = 0;
    for(i=0; i<5; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr+i));
    }

    printf("\n");

}


void pointer_and_array()
{
    int arr_[3] = {1,2,3};
    float float_arr[10] = {23.23, 0.2342, 23.2342, 234.24, 223.2342};
    long long long_arr[10] = {2342234,23423412,4675674,3443576,348989} ;

    int *ptr = arr_;
    float *float_ptr = float_arr; 
    long long *long_ptr = long_arr;

    printf("\nPointer and Array:\n");
    printf("Array values using pointer: %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));
    printf("Addresses of int pointer values:%d, %d, %d\n", ptr, ptr+1, ptr+2);

    printf("\n");
    printf("Pointer and Array with float points\n");
    printf("Array values using pointer: %f %f %f\n", *float_ptr, *(float_ptr + 1), *(float_ptr + 2));
    printf("Addresses of float values:%d, %d, %d\n", float_ptr, float_ptr+1, float_ptr+2);


    printf("\n");
    printf("Pointer and Array with Long Long points\n");
    printf("Array values using pointer: %lld %lld %lld\n", *long_ptr, *(long_ptr + 1), *(long_ptr + 2));
    printf("Addresses of long long values:%d, %d, %d\n", long_ptr, long_ptr+1, long_ptr+2);

    printf("\n\n");
}

struct Person
{
    char name[20];
    int age;
};


void pointer_and_structure()
{
    struct Person p = {"Charlie",35};
    
    // pointer that contains the address of the struct
    struct Person *ptr = &p;

    // to access the elements of the struct
    // using arrow-operator of pointer
    printf("Using pointer with struct:\n");
    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
    printf("\n\n");
}


int main()
{
    pointer_and_array();
    pointer_arithmetic();
    pointer_and_structure();
    return 0;
}


