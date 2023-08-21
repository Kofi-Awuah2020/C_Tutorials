#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, a, b;

    puts("100 Random Numbers");
    for (a = 0; a < 20; a++)
    {
        for (b = 0; b < 5; b++)
        {
            r = rand();
            int value = (r % 20) + 0; //limiting the number generated to 0 - 20
            printf("%d\t", value);
        }
        putchar('\n');
    }
    return(0);
}