#include<stdio.h>
int main()
{
    char a[100],b[100];
    gets(a);
    int len,i;
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
}
