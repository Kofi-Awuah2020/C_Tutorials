#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pointer declaration
    int *array;

    //Allocate Memory
    array = (int *)malloc(sizeof(int) * 3);

    if (array == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }

    //Fill array
    int x;
    for (x = 0; x < 3; x++)
    {
        *array = ((x + 1) * 100);
        printf("%d ", *array);
        array++;
    }
    putchar('\n');

    return(0);
}