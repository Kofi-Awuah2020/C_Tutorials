#include <stdio.h>

/*  Function Declaration    */
void swap(int *x, int *y);

int main()
{
    /*  Local Variable Declaration  */
    int a = 100;
    int b = 50;

    printf("Value of 'a' before swap: %i\n", a);
    printf("Value of 'b' before swap: %i\n", b);

    /*  Calling function to swap values*/
    swap(&a, &b);

    printf("Value of 'a' after swap: %i\n", a);
    printf("Value of 'b' after swap: %i\n", b);

    return(0);
}

void swap(int *x, int *y)
{
   int temp;    
   temp = *x;    /*  save the value of x */
   *x = *y;       /*  put y into x    */
   *y = temp;    /*  put x into y    */

   return; 
}