#include<stdio.h>
int main()
{
    char a[50];
    char *p,*q;
    gets(a);
    p=q=a;
    int n=0;
    while(*p!='\0')
        p++;
    n=p-q;
    printf("Length is %d ",n);
}
