#include <stdio.h>
#include <math.h>

int main()
{
    int fistarray[] = {10, 12, 14, 15, 16, 18, 20};
    float secondarray[7];

    for (int x = 0; x < 7; x++)
    {
        secondarray[x] = sqrt(fistarray[x]);
        printf("The %d element is %.2f.\n", x + 1, secondarray[x]);
    }

}