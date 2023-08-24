#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("You typed %d arguments.\n", argc);
    
    int x;
    for (x = 0; x < 4; x++)
    {
        printf("Arg#%d = %s.\n",x +1, argv[x]);
    }
    
    return(0);
}