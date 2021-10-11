#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-1];
    }
    pri
}
