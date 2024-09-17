#include<stdio.h>

// passing pointer to a function
void modify(int *p)
{
    *p = 100;
}

void pointer_to_function()
{
    int x = 10;
    printf("Before passing to function, x = %d\n", x);

    printf("Address of the variable x is %d\n", &x);
    // passing address of the variable x
    modify(&x);    
    printf("After modification, x=%d\n", x);
}

int main()
{
    pointer_to_function();

    return 0;
}