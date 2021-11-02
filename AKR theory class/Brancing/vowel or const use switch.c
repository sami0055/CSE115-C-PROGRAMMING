#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=ch+32;
    switch(ch)

    {
case 'a':
    case 'e':
    case 'i':

    case 'o':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("consonant");
    }
}
