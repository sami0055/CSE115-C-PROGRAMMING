#include<stdio.h>
int main()
{
    char a[100],b[100];
    char *p,*q;
    gets(a);
    p=a;
    q=b;
    while(*p!='\0')
    {
        p++;
    }
    --p;
    while(p>=&a[0])
    {
        *q=*p;
        q++;
        p--;
    }
    printf("%s",b);
}
