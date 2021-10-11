//C program to read and print elements in an array

#include<stdio.h>

int main()
{
    int array[100];
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Entered five element of in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Elements in array  are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;


}

