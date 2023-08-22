#include <stdio.h>

void showarray(int array[]);
void arrayinc(int array[]);

int main()
{
    int n[] = {2, 3, 5, 7, 11};

    puts("Here's your array:");
    showarray(n);
    arrayinc(n);
    showarray(n);
    return(0);
}

void showarray(int array[])
{
    int x;

    for (x = 0; x < 5; x++)
    {
        printf("%d ", array[x]);
    }
    putchar('\n');
}

void arrayinc(int array[])
{
    int y;
    for (y = 0; y < 5; y++)
    {
        array[y] += 1; 
    }
}