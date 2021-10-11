#include<stdio.h>
int main()
{
    int i,j,len,count=0;
    char a[100];
    fgets(a,sizeof a,stdin);
    len=strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            while(i<len-1)
            {
                a[i]=a[i+1];
                i++;
                count++;
            }
        }
    }
    for(i=0; i<len; i++)
    {   if(count>0)
        printf("%c",a[i]);
    }
}
