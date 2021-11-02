#include<stdio.h>
int main()
{
    int i,n,j,t;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1; i>=0; i--)
     {
         for(j=i; j>=0; j--)
         {
        if(a[j]==0)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
         }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
