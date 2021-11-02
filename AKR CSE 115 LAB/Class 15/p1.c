#include<stdio.h>
int main()
{
    int i,n,*p,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[0];
    max=*p;
    for(i=0; i<n; i++)
    {
        if(*p>max)
            max=*p;
        p++;
    }
    printf("Maximum is %d",max);

}
