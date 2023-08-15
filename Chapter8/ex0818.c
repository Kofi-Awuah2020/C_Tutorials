#include <stdio.h>

int main(void)
{
    char input;
    printf("Enter the error code A, B, or C: ");
    scanf("%c", &input);

    switch(input)
    {
    case 'A':
        puts("Drive Fault, not your faut.");
        break;
    case 'B':
        puts("Illegal format, all a lawyer.");
        break;
    case 'C':
        puts("Bad filename, spank it.");
        break;
    default:
        puts("That's not A, B, or C");
    }

}