#include<stdio.h>
int main()
{
    int i,n,second_lar;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    second_lar=secondlargest(a,n);
    printf("second largest is %d ",second_lar);

}
int secondlargest(int a[],int n)
{
    int i,max=a[0],secL=a[1];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            secL=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>secL)
            secL=a[i];

    }
    return secL;

}
