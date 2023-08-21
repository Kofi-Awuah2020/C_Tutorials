#include <stdio.h>

int main()
{
    char firstname[16]; //Always alocate one space for the '\0' 
    char lastname[20];

    printf("What's your first name? ");
    scanf("%15s",firstname); // '%15s' limit string to 15 chars.
    printf("What's your first name? ");
    scanf("%19s",lastname);
    printf("Pleased to meet you, %s %s\n", firstname, lastname);
    return(0);
}