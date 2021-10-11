#include<stdio.h>
int main()
{
    int array[100],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }

    for(i=0; i<n; i++)
    {
         if(array[i]<0)
        printf("%d\t",array[i]);

    }

}
