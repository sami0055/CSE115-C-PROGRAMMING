#include <stdio.h>

int main()
{
    long dec, quotient, rem;
    int i, j = 0;
    char hexadec[100];

    printf("Enter decimal number: ");
    scanf("%ld", &dec);

    quotient = dec;

    while (quotient != 0)
    {
        rem = quotient % 16;
        if (rem < 10)
            hexadec[j++] = 48 + rem;
        else
            hexadec[j++] = 55 + rem;
        quotient = quotient / 16;
    }


    for (i = j; i >= 0; i--)
            printf("%c", hexadec[i]);
    return 0;
}
