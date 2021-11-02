#include<stdio.h>
int main()
{
    char s[100],s1[100];
    printf("Enter the string: ");
    gets(s);
    strcpy(s1,s);
    strrev(s1);
    if(strcmpi(s,s1)==0)
        printf("%s Palindrome",s);
    else
        printf("%s Not palindrome",s);

}
