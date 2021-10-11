#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=1; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
}
