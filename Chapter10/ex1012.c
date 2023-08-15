#include <stdio.h>

#define TRUE 1
#define FALSE 0
void limit(int stop);
void verify(int input);

int main()
{
    int s;

    printf("Enter a stopping value (0 - 100): ");
    scanf("%d", &s);
    verify(s);
    limit(s);
    return(0);
}

void limit(int stop)
{
    int x;

    for (x = 0; x <= 100; x = x + 1)
    {
        printf("%d ", x);
        if ( x == stop)
        {
            puts("You won!");
            return;
        }
    }
    puts("I won!");
}

void verify(int input)
{
    if ( input >= 0 && input <= 100 )
    {
        printf("%d. You are within range!\n", TRUE);    
    }
    else
    {
        printf("%d. You are out of range!\n", FALSE);    
    }
}