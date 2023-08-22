#include <stdio.h>

int main()
{
    char programme[] = "C Programming is fun!";
    int previous, next, temp;
    puts("The unsorted string: ");
    printf("%s\n", programme);
    /* printf("%c\n", programme[2]); */

    for (previous = 0; previous < 21; previous++)
    {
        for (next = previous + 1; next < 22; next++)
        {
            if (programme[previous] < programme[next])
            {
                temp = programme[previous];
                programme[previous] = programme[next];
                programme[next] = temp;
            }
        }
    }

    puts("This is the sorted string: ");
    printf("%s\n", programme);
    
    return(0);
}