#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the separate and equal station to which the Laws of Nature and of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the causes which impel them to the separation.";

    int index, alpha, space, punct, caps, lower, count;

    alpha = space = punct = caps = lower = count = 0;

/*  Gather Data */
    index = 0;
    while(phrase[index])//loops through the index of the array to the last index of the array
    {
        if (isalpha(phrase[index]))
        {
            alpha++;
        }
        if (isspace(phrase[index]))
        {
            space++;
        }
        if (ispunct(phrase[index]))
        {
            punct++;
        }
        if (isupper(phrase[index]))
        {
            caps++;
        }
        if (islower(phrase[index]))
        {
            lower++;
        }
        if (isalpha(phrase[index]))
        {
            count++;
        }
        index++;
    }

/*  Print Results   */
    printf("\"%s\"\n", phrase);
    puts("Statistics");
    printf("%d alphabetic characters\n", alpha);
    printf("%3d space \n", space);
    printf("%3d punctuation symbols\n", punct);
    printf("%3d uppercase alphabets\n", caps);
    printf("%d lowercase alphabets\n", lower);
    printf("%d characters \n", count);

    return(0);
}