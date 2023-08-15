#include <stdio.h>

int main(void)
{
    const int x = 4;
    char name[x];

    printf("Who are you? ");
    fgets(name, x, stdin); //(array name, array size, stdin)
    printf("Glad to meet you, %s.\n", name);
    return(0);
}