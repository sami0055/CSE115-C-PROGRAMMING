#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
   int r=sumDigit(n);
   printf("%d",r);
}
int sumDigit(int n)
{
    int sum=0;
    if(n==0)
        return 0;
    else
    {
        return n%10+sumDigit(n/10);
    }
}
