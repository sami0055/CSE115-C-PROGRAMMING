#include<stdio.h>
int main()
{
    int arr[100],freq=0,i,key,n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to find frequency: \n");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
          if(arr[i]==key)
            freq++;
    }
    printf("key %d is Frequency %d",key,freq);
}
