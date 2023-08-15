#include <stdio.h>

int main(void)
{
    char lowercase;

    for (lowercase = 'z'; lowercase >= 'a'; lowercase = lowercase- 1)
    {
        printf("%c", lowercase);
    }
    printf("\n");
}