#include<stdio.h>
int main()
{
    char a[100],b[100];
    char *p=a,*q=b;
    printf("Enter first string:\n");
    gets(a);
    printf("Enter second string:\n");
    gets(b);
    while(*p!='\0')
    {
        p++;
    }
    while(*p=*q)
    {
        p++;
        q++;
    }
    printf("%s",a);
}
