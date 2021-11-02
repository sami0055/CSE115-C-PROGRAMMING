#include<stdio.h>
int main()
{
    int i,n,t;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[n-1];

    for(i=n-1; i>=0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=t;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
