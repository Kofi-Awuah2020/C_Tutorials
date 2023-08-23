#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "JohnY tHe hE GOAT is Not reaLLY a goAT BuT a FIsh";

    //Initializing the For loop
    int index;
    for (index = 0; index < 50; index++)
    {
        if (isupper(str[index]))
        {
            str[index] = tolower(str[index]);
        }
        else
        {
            str[index] = toupper(str[index]);
        }
    }
    //Ouputting the result
    printf("%s\n", str);
    return(0);
}