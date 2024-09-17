#include<stdio.h>


struct StructEg
{
    int x;
    float y;
};


union UnionEg
{
    int x;
    float y;
};


void struct_and_union() 
{
    struct StructEg s = {10, 123.234};
    union UnionEg u; 

    // in union, only one member can be active at a time
    u.x = 30;

    printf("Structure vs Union:\n");
    printf("Structure values: x = %d, y = %.2f\n", s.x, s.y);
    printf("Union value (x): %d\n", u.x); // Only x is active
    printf("\n");

}

int main()
{
    struct_and_union();

    return 0;
}