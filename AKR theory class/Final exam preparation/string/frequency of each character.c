#include<stdio.h>
int main()
{
    char a[100];
    int len,dup[100],i,j,count;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        dup[i]=-1;
    }
    for(i=0; i<len; i++)
    {
        count=1;
        for(j=i+1; j<len; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0)
        {
            dup[i]=count;
        }
    }
    for(i=0; i<len; i++)
    {
        if(dup[i]!=0)
            printf("%c occurring %d times\n",a[i],dup[i]);
    }
}
