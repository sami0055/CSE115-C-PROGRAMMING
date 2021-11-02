#include<stdio.h>
int main()
{
    char a[100];
    int len,i;
    gets(a);
    for(i=0; i<len; i++)
    {
        if(a[i]==' ')
        break;
        printf("%c",a[i]);
    }
}
