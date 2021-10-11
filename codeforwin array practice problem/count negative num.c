#include<stdio.h>
int main()
{
    int i,array[10],n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        if(array[i]<0)
        {
            count++;
        }
    }
    printf("Negative number: %d",count);
}

