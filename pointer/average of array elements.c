#include<stdio.h>
int main()
{
    int i,n,*p,sum=0;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0; i<n; i++)
    {
        sum=sum+*p;
        p++;
    }
    float avg=(float)sum/n;
    printf(" Avg is %.2f",avg);
}
