#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int size = 40;
    int random[size];
    int previous, next, temp;
    
    /* Creating an array of 40 numbers */
    puts("The unsorted list");
    for (int x = 0; x < size; x++)
    {
        int r = rand();
        random[x] = (r % 100) + 1;
        printf("%d ", random[x]);      
    }
    putchar('\n');

    /* Bubble Sort */
    for (previous = 0; previous < size - 1; previous++)
    {
        for (next = previous + 1; next < size; next++)
        {
            if ( random[previous] > random[next])
            {
                temp = random[previous]; 
                random[previous] = random[next];
                random[next] = temp;
            }
        }
    }

    /* Printing the new sorted list */
    puts("The sorted list");
    for (int y = 0; y < size; y++)
    {
        printf("%d ", random[y]);
    }
    putchar('\n');

    /* Reverse Bubble sort */
   for (previous = 0; previous < size - 1; previous++)
    {
        for (next = previous + 1; next < size; next++)
        {
            if ( random[previous] < random[next])
            {
                temp = random[next]; 
                random[next] = random[previous];
                random[previous] = temp;
            }
        }
    }

    /* Printing the reverse sorted list */
    puts("The reverse sorted list");
    for (int z = 0; z < size; z++)
    {
        printf("%d ", random[z]);
    }
    putchar('\n');
}   