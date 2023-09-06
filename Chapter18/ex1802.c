#include <stdio.h>

int main()
{
    char string[] = "Does this string make me look fat?";
    int elements[5];

    printf("The string \"%s\" has a size of %u. and string length of %u\n" , string, sizeof(string), strlen(string));
    printf("The array elements has a size of %u. and string length of %u\n" , sizeof(elements), strlen(elements));
    return(0);
}