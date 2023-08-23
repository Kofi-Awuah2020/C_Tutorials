#include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "taco";
    char input[15];
    int match;

    printf("Password: ");
    scanf("%s", input);

    //match = strcmp(input,password);
    if (strcmp(input,password) == 0)
    {
        puts("Password Accepted");
    }
    else
    {
        puts("Invalid password. Alert the authorities.");
    }
    return(0);
}