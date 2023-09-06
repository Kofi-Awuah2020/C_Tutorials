#include <stdio.h>

int main()
{
    char alpha[26];
    char *p;
    int x;

    p = alpha;  /*  Initialize Pointer*/

    /*  Fill the array  */
    for(x = 0; x < 26; x++)
    {
        *p++ = 'A' + x;
    }

    p = alpha;  /*  Re-initialize the array */

    /*  Output the array    */
    printf("The alphabets are: ");
    for(x = 0; x < 26; x++)
    {
        printf("%c ", *p++);
        
    }
    putchar('\n');
    return(0);
}