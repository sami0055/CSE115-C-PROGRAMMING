#include<stdio.h>
int main()
{
    int arr[100],i,j,n,count=0,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);



    }

    for(i=0; i<n; i++)
    {
       count=1;
        for(j=i+1; i<n; i++)
            if(arr[i]==arr[j])
        {
            count++;

        }
    }


    printf("Total number of duplicate number: %d",count);
}
