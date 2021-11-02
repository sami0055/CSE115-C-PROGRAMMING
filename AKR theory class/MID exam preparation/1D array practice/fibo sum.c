#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    sum=a[0]+a[1];
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
        sum=sum+a[i];
    }
    printf("%d ",sum);
}

