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
    printf("print a array:\n");
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\nPrint reverse array: \n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
