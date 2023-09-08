#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;
    char *output;
    char *inputPtr; // Separate pointer for input
    char *outputPtr; // Separate pointer for output

    /*  allocate memory */
    input = (char *)malloc(sizeof(char) * 1024);
    output = (char *)malloc(sizeof(char) * 1024);

    if (input == NULL || output == NULL)
    {
        puts("Unable to allocate buffer! Oh no!");
        exit(1);
    }

    /*  use the memory  */
    puts("Type something long and boring:");
    fgets(input, 1024, stdin);

    inputPtr = input; // Initialize inputPtr to the beginning of input
    outputPtr = output; // Initialize outputPtr to the beginning of output

    while(*inputPtr != '\n')
    {
        *outputPtr++ = *inputPtr++;
    }
    *outputPtr = '\0';

    printf("Original text:  \"%s\"\n", input);
    printf("Duplicate text:  \"%s\"\n", output);
  
    return(0);
}