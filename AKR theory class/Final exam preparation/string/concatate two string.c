#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j;
    gets(a);
    gets(b);
    i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    j=0;
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf("%s",a);
}
