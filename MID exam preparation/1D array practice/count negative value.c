#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }

    printf("%d",count);
}
