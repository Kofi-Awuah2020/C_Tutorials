#include <stdio.h>

int main(void)
{
    float const a = 5.0, b = 7.0;
    float c;

    c = a / b;
    printf("Variable c = %f\n", c);
    return(0);
}