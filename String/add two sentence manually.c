#include<stdio.h>
int main()
{
    int i,j,len1,len2;
    char a[100],b[100];
    fgets(a,sizeof a,stdin);
    fgets(b,sizeof b,stdin);
    len1=strlen(a);
    len2=strlen(b);
    printf("%d\n",len1);
    printf("%d\n",len2);
    for(i=0; i<len1-1; i++)
    {
        a[i];
    }
        a[i]=' ';
         i++;
    for(j=0; j<len2-1; ++j,++i)
    {
        a[i]=b[j];
    }

    int k=strlen(a);
    for(i=0; i<k-1; ++i)
    {
        printf("%c",a[i]);

    }

}
