#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int len,i;
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        a[i]=a[i]+32;

    }
    printf("%s",a);
}
