#include <stdio.h>

int main(void)
{
    char first,second,third;

    for(first = 'A'; first <= 'Z'; first = first + 1)
    {
        for (second = 'A'; second <= 'Z'; second = second + 1)
        {
            for(third = 'A'; third <= 'Z'; third = third + 1)
            {
                printf("%c%c%c\t", first, second, third);
            }
            putchar('\n');
        }
    }
}