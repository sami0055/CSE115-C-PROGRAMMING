#include<stdio.h>
int main()
{
    int i,j,len;
    char a[10][50],temp[50];

    len=strlen(a);
    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
         if(strcmpi(a[i],a[j])>0)
         {
             strcpy(temp,a[i]);
             strcpy(a[i],a[j]);
             strcpy(a[j],temp);
         }

    }

    for(i=0; i<len; i++)
    {
     puts(a[i]);
    }
    return 0;
}
