#include<stdio.h>
int main()
{
    int n,i,first,second_leargest,array[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    first=array[0];
    second_leargest=array[1];
    for(i=2; i<n; i++)
    {
        if(array[i]>first)
        {
                first=array[i];
                second_leargest=first;
        }

 else if(first>array[i]>second_leargest)
   {
       second_leargest=array[i];
   }

    }

        printf("second leargest: %d",second_leargest);
}
