#include<stdio.h>
int main()
{
    char a[100];
    int i,j,count=0,n,maxcount=0;
    char maxrepeatedchar;
    gets(a);
    n=strlen(a);

    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count>maxcount)
        {
            maxcount=count;
            maxrepeatedchar=a[i];
        }
    }

    printf("%c occoured maximum %d times",maxrepeatedchar,maxcount);
}
