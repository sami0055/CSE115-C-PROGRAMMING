#include<stdio.h>
int main()
{
    int i,array[10],n,even,odd;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
      scanf("%d",&array[i]);
    }

    even=0;
    odd=0;
    for(i=0; i<n; i++)
    {
        if(array[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("Even:%d\n",even);
    printf("Odd: %d\n",odd);
}
