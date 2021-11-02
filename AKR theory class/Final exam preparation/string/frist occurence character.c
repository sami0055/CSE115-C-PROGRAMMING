#include<stdio.h>
int main()
{
    char a[100],x,y;
    gets(a);
    int i,len,j,count=0;
    len=strlen(a);
    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
        if(a[i]==a[j])
            break;
    }
    if(count==1)
    printf("First occurrence character %c ",a[i]);
}
