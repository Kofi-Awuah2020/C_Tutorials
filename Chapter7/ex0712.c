#include <stdio.h>

int main(void)
{
    char name[10];
    
    printf("Type your first and last name: ");
    fgets(name, 30,stdin);
    printf("Pleased to meet you, %s.\n", name);
    return(0);
}