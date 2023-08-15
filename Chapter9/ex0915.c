#include <stdio.h>

int main(void)
{
    float x;

    x = -5;
    do
    {
        printf("%1.1f\t", x);
        x = x + 0.5;
    }while (x <= 5.0);
    
    putchar('\n');
    return(0);
}