#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("Enter the size of array \n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    printf("sum is %d ",sum);
}
