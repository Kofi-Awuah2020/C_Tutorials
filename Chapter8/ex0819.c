#include <stdio.h>

int main(void)
{
    char choice;

    puts("Meal Plans: ");
    puts("A - Breakfast, Lunch, and Dinner");
    puts("B - Luch and Dinner only");
    puts("C - Dinner only");
    puts("Your choice: ");
    scanf("%c", &choice);

    printf("You've opted for:");
    switch(choice)
    {
        case 'A':
            printf("Breakfast, ");
        case 'B':
            printf("Lunch and ");
        case 'C':
            printf("Dinner ");
        default:
            printf("as your meal plan.\n");
    }
    return (0);
}