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
    t=a[0];
    for(i=0; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=t;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
