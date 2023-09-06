#include <stdio.h>

int main()
{
    int values[] = {1, 2, 3, 4, 5};
    int x; 
    
    for(x = 0; x < 5; x++)
    {
        printf("The values are: %d, the adresses are: %p.\n", values[x], &values[x]);
    }
    return(0);
}