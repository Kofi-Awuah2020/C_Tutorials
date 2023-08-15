#include <stdio.h>

int main(void)
{
    int count;

    for (count = 0; count > -1; count = count + 1)
    {
        printf("%d ", count);
        if (count > 50)
        {
            break;
        }
            
    }
    putchar('\n');
    return(0);
}