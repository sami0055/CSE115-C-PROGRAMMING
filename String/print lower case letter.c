#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    int i;
    char t;
    int len=strlen(a);
    for(i=0; i<len; i++)
    {

        if(a[i]<='z' && a[i]>='a')
        {
          printf("%c",a[i]);
        }
    }

}
