#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],max;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];


    }
    printf("Maximum %d appeared in location: ",max);
    for(i=0; i<n; i++)
    {
        if(a[i]==max)
            printf("%d ",i);
    }
}
