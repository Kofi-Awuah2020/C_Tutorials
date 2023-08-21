#include <stdio.h>

int main()
{
    //Order of Presedence
    int x, y, z;
    x = (20 - 5) * (2 + 42) / 6;
    y = 12 / 3 / 2;
    z = (12 - 5) * 2;
    printf("%d %d %d\n", x, y, z);
}