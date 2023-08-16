#include <stdio.h>

int main()
{
    /*Outputting the numbers 5 through 100 increments of 5*/
    
    int x = 5;
    while(x <= 100)
    {
        printf("%d ", x);
        x += 5;
    }
    putchar('\n');
    return(0);
}