#include <stdio.h>

int main(void)
{
    int a, b, larger;

    printf("Enter value A: ");
    scanf("%d", &a);
    printf("Enter different value B: ");
    scanf("%d", &b);

    //result = expression ? if_true : if_false;
    //After expression is evaluted, the 'if true' variable 'a' is stored in larger.
    //if expression is false, the 'if false' variable 'b' is stored in larger.
    larger = (a > b) ? a : b;
    printf("Value %d is larger.\n", larger);
    return (0);
}