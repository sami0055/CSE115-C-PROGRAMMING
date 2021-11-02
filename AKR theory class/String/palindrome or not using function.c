#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmpi(a,b)==0)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
