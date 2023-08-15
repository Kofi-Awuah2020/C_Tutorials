#include <stdio.h>

void graph(int count, char star);

int main()
{
    int value;
    char asterics;

    value = 2;
    asterics = '*';

    while (value <= 64)
    {
        graph(value, asterics);
        printf("value is %d\n", value);
        value = value * 2;
    }
    return(0);
}

void graph(int count, char star)
{
    int x;

    for (x = 0; x < count; x = x + 1)
    {
        printf("%c", star);
    }
    putchar('\n');
}
