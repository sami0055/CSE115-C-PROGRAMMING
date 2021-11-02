#include<stdio.h>
factorial(int n);
int main()
{
    int x,r;
    printf("Enter a number for factorial \n");
    scanf("%d",&x);
    r=factorial(x);
    printf("fact is %d ",r);
}
int factorial(int n)
{
    int fact=1,i;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
