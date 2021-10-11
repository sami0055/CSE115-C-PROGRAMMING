
#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,len,j;
    gets(a);
    len=strlen(a);
    for(i=len-1,j=0; i>=0,j<len; i--,j++)
    {
        b[j]=tolower(a[i]);
    }
    printf("%s",b);
}
