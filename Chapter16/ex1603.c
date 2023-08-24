#include <stdio.h>

typedef int stinky;

stinky main()
{
    stinky a = 2;

    printf("Everyone knows that ");
    printf("%d + %d = %d\n", a, a, a + a); 

    int x = 2;
    if (x == a)
    {
        printf("True\n");
    }
    return(0);
}