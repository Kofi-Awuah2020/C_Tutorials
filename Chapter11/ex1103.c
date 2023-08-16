#include <stdio.h>

int main(void)
{
    /* Displaying values through -5 to 4 */
    
    for (int x = -5; x < 5; x++)
    {
        printf("%d ", x);
    }

    /* Displaying values through 5 to -5 */

    for (int y = 5; y >= -5; y--)
    {
        printf("%d ", y);
    }
    putchar('\n');
    return (0);
}
