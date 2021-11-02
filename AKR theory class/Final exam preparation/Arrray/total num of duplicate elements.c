#include<stdio.h>
int main()
{
    int i,n,count=0,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
       for(j=i+1; j<n; j++)
       {
           if(a[i]==a[j])
           {
               count++;
               break;
           }
       }
    }
    printf("%d Duplicates elements ",count);
}
