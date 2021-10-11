#include<stdio.h>
int main()
{
    int i,j,len;
    char a[100];
    gets(a);
    len=strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]==' ')
            printf("*");
        else
            printf("%c",a[i]);
    }
}
