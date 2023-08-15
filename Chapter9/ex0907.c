#include <stdio.h>

int main(void)
{
    int x;

    for (x = 25; x >= 0; x = x - 1)
    {
        printf("%d\t", x);
    }
    putchar('\n');
}