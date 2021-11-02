#include<stdio.h>
int sum(int a[],int size,int M);
int main()
{
    int n,x,i,r,X;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value of X: ");
    scanf("%d",&X);
    r=sum(a,n,X);
    printf("Sum is %d ",r);
}

int sum(int a[],int size,int M)
{
    int i,sum=0;
    for(i=0; i<size; i++)
    {
        if(a[i]>M)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
