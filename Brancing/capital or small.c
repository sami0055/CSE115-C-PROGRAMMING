#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Capital latter");

    else if(ch>='a' && ch<='z')
        printf("Small latter");

    else
        printf("Not a latter");
}
