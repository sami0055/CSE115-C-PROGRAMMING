#include<stdio.h>
int main()
{
    int a[100],i,n,max,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
   max=a[0];
   min=a[0];


   for(i=1; i<n; i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
       if(a[i]<min)
       {
           min=a[i];
       }
   }

   printf("max is %d\n",max);
   printf("Min is %d",min);
}
