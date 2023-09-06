#include <stdio.h>

int main()
{
    char sample[] = "From whence cometh my help?\n";
    char *alpha;

    alpha = sample;

    while (putchar(*alpha++))
        ;
    return(0);
}