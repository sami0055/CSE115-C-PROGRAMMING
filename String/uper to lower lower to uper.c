#include<stdio.h>
int main()
{
    char a[100];
    int i,j,len;
    fgets(a,sizeof a,stdin);
    len=strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]>='a'&& a[i]<='z')
            a[i]=toupper(a[i]);
        else
            a[i]=tolower(a[i]);
    }
    printf("%s",a);

}
