#include <stdio.h>

int main()
{
    int a, b;

    b = 16;
    printf("Before, a is aunassigned and b = %d\n", b);
    a = ++b;
    printf("After, a = %d and b = %d\n", a, b);
    return(0);
}