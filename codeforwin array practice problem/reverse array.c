#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
    }

    printf("Array in reverse: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
