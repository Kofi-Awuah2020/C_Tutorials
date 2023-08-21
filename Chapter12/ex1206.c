#include <stdio.h>

int main()
{
    float marketclose[] = {24164.95, 24107.08, 24643.63, 24400.93, 23728.53};
    puts("Stock Market Close");

    for (int x = 0; x < 5; x++)
    {
        printf("Day %d: %.2f\n", x + 1, marketclose[x]);
    }
    
}