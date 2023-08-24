#include <stdio.h>

int main()
{
    int day;
    enum{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    
    printf("Enter a weekday number, (0 - 6): ");
    scanf("%d", &day);

    switch(day)
    {
        case Sunday:
            puts("It's a Sunday");
            break;
        case Monday:
            puts("It's a Monday");
            break;
        case Tuesday:
            puts("It's a Tuesday");
            break;
        case Wednesday:
            puts("It's a Wednesday");
            break;
        case Thursday:
            puts("It's a Thursday");
            break;
        case Friday:
            puts("It's a Friday");
            break;
        case Saturday:
            puts("It's a Saturday");
            break;
        default:
            puts("That day only exists on Mars :)");
            break;
    }
    return(0);
}