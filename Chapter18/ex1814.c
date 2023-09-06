#include <stdio.h>

int main()
{
    int x;
    float y;
    
    int *p; 
    float *s; 
    
    p = &x;     /*  do not use asteriks when assigning value    */
    *p = 70;    /*  use asteriks when assigning value   */
    s = &y;
    *s = 2.6;

    printf("The values of 'x' and 'y' are: %d and %.1f respectively.\n", x, y);

    return(0);
}