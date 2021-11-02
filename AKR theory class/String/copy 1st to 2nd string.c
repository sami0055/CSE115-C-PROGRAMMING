#include<stdio.h>
int main()
{
    int i,j,len;
    char a[100],b[100];
    fgets(a,sizeof a,stdin);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",b);


}
