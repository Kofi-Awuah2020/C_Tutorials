#include <stdio.h>
#include <ctype.h>

int main()
{
    char answer;

    printf("Would you like to blow the moon? ");
    scanf("%c", &answer);
    
    if (answer != 'Y' || answer != 'N')
    {
        puts("Wrong input");
    }
     
    answer = toupper(answer);
    if (answer == 'Y')
    {
        puts("BOOM!");
    }
    else
    {
        puts("The moon is safe");
    }
    return(0);
}