#include <stdio.h>

int main()
{
    /* Displaying values from -10 to 10 */

    /* For Loop execution*/
    int x; //Ensure global variable use when employing this method of for loops

    for (x = -10; x < 10; x++)
    {
        printf("%d ", x);
    }

    /* Displaying values from 10 to -10 */

    /* For Loop execution*/
    for (; x >= -10; x--) //The value of x (10) is carried over and initialized in the loop
    {
        printf("%d ", x);
    }
    putchar('\n');
    return(0);
}