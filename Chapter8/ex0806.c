#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guess, secret;

    printf("Can you guess the secret number: ");
    scanf("%d", &guess);
    secret = rand();

    if (guess == secret)
    {
        puts("You guessed it!");
        return(0);
    }
    else
    {
        puts("Wrong!");
        printf("The number is %d\n", secret);
        return(1);
    }
}