#include <stdio.h>

char *binbin(unsigned n);

int main()
{
    unsigned bshifts, x;

    printf("Type a value 0 to 65535: ");
    scanf("%u", &bshifts);

    for (x = 0; x < 8; x++)
    {
        printf("%s %2d\n", binbin(bshifts), bshifts);
        bshifts = bshifts >> 1;
    }
    return(0);
}

char *binbin(unsigned n)
{
    static char bin[9];
    int x;

    for (x = 0; x < 16; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}