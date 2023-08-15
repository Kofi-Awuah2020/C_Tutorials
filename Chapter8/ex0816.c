#include <stdio.h>

int main(void)
{
    int input;

    printf("Do you want to continue(Y/N)? ");
    input = getchar();

    if (input == 'Y' || input =='y')
    {
        printf("Continuing..\n");
    }
    else if (input == 'N' || input == 'n')
    {
        printf("Ending..\n");
    }
    else
    {
    return(0); 
    }
}