#include<stdio.h>
int main()
{
    char s1[100],s2[100],result;
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2:");
    gets(s2);
    len1=strlen(s1);
    len2=strlen2(s2);
    while(*s1==*s2)
    {
        if(*s1=='\0'|| *s2=='\0')
            break;
        s1++;
        s2++;
    }

}
