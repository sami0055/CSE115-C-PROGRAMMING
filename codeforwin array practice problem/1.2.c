#include<stdio.h>
#define max_size 1000
int main()
{
    int array[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",&array[i]);
    }
    printf("All the elements are: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t \a",array[i]);
    }

    return 0;
}
