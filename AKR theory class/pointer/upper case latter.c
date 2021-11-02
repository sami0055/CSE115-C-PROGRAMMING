#include<stdio.h>
int main()
{
    char a[100];
    char *p;
    gets(a);
    p=a;
    while(*p!='\0')
    {
        *p=toupper(*p);
        p++;

    }
     printf("%s",a);

}
