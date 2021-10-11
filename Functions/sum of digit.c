#include<stdio.h>
int sumOfdigit(int n);
main()
{
    int n,r;
    printf("Enter your digit\n");
    scanf("%d",&n);
    r=sumOfdigit(n);
    printf("sum is %d ",r);

}

int sumOfdigit(int n)
{
    int temp,r,sum=0;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    return sum;
}
