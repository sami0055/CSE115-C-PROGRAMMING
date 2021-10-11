#include<stdio.h>
#define MAX_size 1000
int main()
{
    int array[MAX_size],i,N;
    printf("Enter the size of array: ");
    scanf("%d",&N);

    printf("Enter the elements of array: \n");
    for(i=0; i<N; i++)
    {
        printf("Array[%d]",i);
        scanf("%d",&array[i]);
    }

     printf("\nElements in array are : ");
     for(i=0; i<N; i++)
     {

         printf("%d\t",array[i]);
     }

}
