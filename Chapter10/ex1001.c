#include <stdio.h>

void busy();    /*function prototype*/
void prompt(void)
{
    printf("C:\\DOS> ");
}  

int main()
{
    busy();
    return(0);
}

//Busy Funciton
void busy(void)
{
     int loop;
    char input[32];

    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input,32,stdin);
        loop = loop + 1;
    }
}
/*Display prompt*/

