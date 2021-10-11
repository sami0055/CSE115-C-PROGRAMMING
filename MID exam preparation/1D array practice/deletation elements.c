#include<stdint-gcc.h>
int main()
{
    int i,n,pos;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position for delete: ");
    scanf("%d",&pos);

    if(pos>n||pos<0)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        n--;
        printf("Print elements after deletetion: \n");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }


}
