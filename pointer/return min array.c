#include<stdio.h>
int *findMid(int a[],int n);
int main()
{
    int a[]={1,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid=findMid(a,n);
    printf("%d",*mid);
    return 0;
}
int *findMid(int a[],int n)
{
    return &a[n/2];
}
