#include<stdio.h>
int main()
{
    char a[50],t;
    char *p,*q;
    gets(a);
    p=a;
    while(*p!='\0')
    {
        p++;
    }
    p--;
    q=a;
 while(p>q)
 {

    t=*p;
    *p=*q;
    *q=t;
    q++;
    p--;
 }
 printf("%s",a);
}
