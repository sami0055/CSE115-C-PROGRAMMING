#include<stdio.h>
int main()
{
    int i,max,min,n,array[100];
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    max=array[0];
    min=array[0];
    for(i=1; i<n; i++)
    {
        if(array[i]>max )
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }

    printf("Maximum element=%d \n",max);
     printf("Minimum element=%d",min);

     return 0;
}
