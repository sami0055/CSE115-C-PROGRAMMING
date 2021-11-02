#include<stdio.h>
int main()
{
    int i,len;
    char a[100];
    //fgets(a,sizeof a,stdin);
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]==' ')
            i++;
        printf("%d ",a[i]);
    }
}
