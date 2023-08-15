#include <stdio.h>

int main(void)
{
    int c;

    printf("I'm waiting for a character: ");
    c = getc(stdin); //getchar() = getc(stdin), returns an integer value
    printf("I waited for the '%c' character.\n", c);
    return(0);
}