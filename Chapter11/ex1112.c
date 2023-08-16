#include <stdio.h>
#include <math.h>

int main()
{
    //A program that displays the powers of 2, from 2^0 through 2^10

    for (int x = 2, y = 0; x <= pow(2, 10); x = pow(2, y++))
    {
        printf("%d ", x);
    }
    putchar('\n');
    return(0);
}