#include<stdio.h>
int main()
{
    char s[80],p,w=0;
    gets(s);
    int i,n;
    n=strlen(s);
    for(i=0; i<n; i++)
    {
       if(s[i]==' ')
       {
           break;
       }
       printf("%c",s[i]);
    }

}
