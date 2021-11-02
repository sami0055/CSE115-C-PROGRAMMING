#include<stdio.h>
int main()
{
    char a[100];
    char *p;
    gets(a);
    p=&a[0];
    while(*p!='\0')
    {
        if(*p>='A'&& *p<='Z')
            *p=tolower(*p);
        else if(*p>='a'&& *p<='z')
            *p=toupper(*p);

        p++;
    }
    printf("%s",a);
}
