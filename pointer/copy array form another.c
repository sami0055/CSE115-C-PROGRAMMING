#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n],b[n];
    int *p,*q,*end_p;
    p=a;
    q=b;
    scan(a,n);
    end_p=&a[n-1];

     printf("source array before copying:");
    printArray(a,n);

   printf("\n");
    while(p<=end_p)
    {
        *q=*p;
        p++;
        q++;
    }
    printf("After copying source array: ");
    printArray(a,n);
    printf("\n");
    printf("Destination array after copying:");
    printArray(b,n);
}
void scan(int *arr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
}
void printArray(int *arr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d",*(arr+i));
    }
}
