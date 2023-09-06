#include <stdio.h>

int main()
{
    int a;
    int *p;

    a = 65;
    p = &a;

    printf("The value of 'a' is: %d\n", *p); 
    
    return(0);
}