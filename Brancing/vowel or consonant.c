#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        ch=ch+32;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Vowel");
    else
        printf("Consonant");
}
