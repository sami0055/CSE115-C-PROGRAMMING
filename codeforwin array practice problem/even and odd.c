#include<stdio.h>
int main()
{
    int even[100],odd[100],arr[100],i,n,ev=0,od=0;
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
        if(arr[i]%2==0)
        {
            even[i]=arr[i];



        }

            else
               {
                   odd[i]=arr[i];


               }

    }
      printf("Even is %d\t",even[i]);
      printf(" odd is %d\t",odd[i]);


}
