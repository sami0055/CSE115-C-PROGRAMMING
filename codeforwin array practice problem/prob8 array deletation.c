
#include<stdio.h>
int main()
{
    int a[100],i,n,pos;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
    printf("Enter a position which u want to delete: ");
    scanf("%d",&pos);
    for(i=pos-1; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
 n--;
 printf("\n Elements of array after delete: ");
 for(i=0; i<n; i++)
 {
     printf("%d\t",a[i]);

 }

 return 0;

}
