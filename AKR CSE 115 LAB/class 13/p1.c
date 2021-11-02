#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    gets(s);
    strupr(s);
    printf("%s",s);
}
