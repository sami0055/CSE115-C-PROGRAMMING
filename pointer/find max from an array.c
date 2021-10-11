#include<stdio.h>
int main()
{
    int i,n,*p,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    p=&a[0];
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    max=*p;
    for(i=0; i<n; i++)
    {
        if(*p>max)
            max=*p;
        p++;
    }
    printf("Maximum is %d ",max);
}
