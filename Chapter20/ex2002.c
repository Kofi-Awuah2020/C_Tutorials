#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *temp;
    char reading;
    float kelvin;

    /*  allocate memory */
    temp = (float *)malloc(sizeof(float) * 1);
    if (temp == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }

    /*  use memory allocation */
    printf("What is the temperature outside? :");
    scanf("%f", temp);

    while((getchar()) != '\n');
    
    printf("Was the input in celsius(C) or fahrenheit(F), C / F ?: ");
    scanf(" %c", &reading);

    
    if (reading == 'C')
    {
        puts("The temperature in kelvin is:");
        kelvin = *temp + 273.15;
        printf("%f Kelvin\n", kelvin);
    }
    else
    {
        puts("The temperature in kelvin is:");
        kelvin = (*temp + 459.67) * (5.0 / 9.0);
        printf("%f Kelvin\n", kelvin);
    }
    
    return(0);
}