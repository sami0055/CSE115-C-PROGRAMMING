#include<stdio.h>
int main()
{
    char a[100];
    int len,i,j,count=0;
    gets(a);
    len=strlen(a);
    for(i=len-1; i>=0; i--)
    {
        for(j=len-1; j>=0; j--)
        {
            if(a[i]==a[j])
                count++;
                break;
        }
        if(a[i]==a[j])
            break;
    }
    if(count==1)
        printf("Last occurrence character %c ",a[i]);

}
