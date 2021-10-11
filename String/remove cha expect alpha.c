#include<stdio.h>
int main()
{
    char a[100];
    int i,j;
    fgets(a,sizeof a,stdin);
    int len=strlen(a);
    for(i=0; i<len-1; i++)
    {
        while(!(a[i]>='a'&& a[i]<='z'|| a[i]>='A' && a[i]<='Z'|| a[i]=='\0'))
        {
            for(j=i; j<len; j++)
            {
                a[j]=a[j+1];
            }
            a[j]='\0';
        }
    }
    printf("%s",a);
}
