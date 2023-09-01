#include <stdio.h>

int main()
{
    char input[64];
    int ch;
    int x = 0;

    printf("Type in ALL CAPS: ");
    fgets(input, 63, stdin);

/*  Converting Uppercase to Lowercase*/
    while (input[x] != '\n')
    {
        if (input[x] != ' ')
        {   ch = input[x] | 32;
            putchar(ch);
        }
        x++;
    }
    putchar('\n');

    return(0);
}