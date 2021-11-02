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
        {
            i++;
            printf("\n");
            printf("%c",a[i]);
        }
        else
        printf("%c",a[i]);
    }
}
