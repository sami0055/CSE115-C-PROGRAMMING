#include<stdio.h>
int main()
{
    char a[100],x,y;
    int len,i,j,count=0;
    gets(a);
    len=strlen(a);
    int max=0;
    for(i=0; i<len; i++)
    {    x=a[i];
        count=1;

        for(j=i+1; j<len; j++)
        {
            y=a[j];
            if(x==y)
            {
                count++;
            }
        }
        if(count>max)
            max=count;
    }
    printf("Maximum occurring character %d times %c",max,x);
}
