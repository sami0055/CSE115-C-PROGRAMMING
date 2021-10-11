#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n; ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i=i+2)
    {
        printf("%d ",a[i]);
    }
}
