#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("I'm waiting for three characters: ");
    a = getc(stdin);
    b = getc(stdin);
    c = getc(stdin);
    printf("The three characters are '%c', '%c', and '%c'\n", a, b, c);
    return(0);
}