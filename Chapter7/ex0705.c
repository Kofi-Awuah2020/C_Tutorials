#include <stdio.h>

int main(void)
{
    int ch;

    printf("Press Enter");
    getchar();
    ch = 'H';
    putchar(ch);
    ch = 'i';
    putchar(ch);
    putchar('!');
    printf("\n");
    return(0);
}