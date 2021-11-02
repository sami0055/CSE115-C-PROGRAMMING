#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    Star_fill(a);


    }
void Star_fill(char a[10])
{
    int i,len;
    len=strlen(a);
    for(i=0; i<=len; i++)
    {
        if(a[i]=='\0')
        {
            a[i]='*';
            a[++i]='*';
            a[++i]='*';
        }

    }
    a[i]='\0';
    printf("%s",a);
}
