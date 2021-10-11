#include<stdio.h>
int main()
{
    int i,j,A[100],sum=0,n;
    printf("Enter the number of arrya :");

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+A[i];
    }
    printf("Sum of array is : %d",sum);


}
