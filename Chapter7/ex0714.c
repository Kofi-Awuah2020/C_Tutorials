#include <stdio.h>

int main(void)
{
    float fav;

    printf("What is your favorite number: ");
    scanf("%f",&fav); //Dnt frgt the place holder nd '&' fr non-string variables(array of char).
    printf("%2.1f is my favourite number, too!\n", fav);
    return(0);
}