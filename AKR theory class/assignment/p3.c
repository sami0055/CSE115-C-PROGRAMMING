#include<stdio.h>
int main()
{
    int i,n,value;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a value for search: ");
    scanf("%d",&value);
    int r=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
         int t=i;
         for(int x=t; x<n-1; x++)
         {
             a[x]=a[x+1];
         }
         a[n-1]=r;break;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
