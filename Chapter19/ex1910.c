#include <stdio.h>

int main()
{
    char alpha = 'A';
    int x;
    char *pa;

    pa = &alpha;     /*Initialize pointer*/

    for(x = 0; x < 26; x++)
    {
        putchar((*pa)++);   /*Peeked value is incremented by 1, pointer address unchanged*/
    }
    putchar('\n');

    return(0);
}