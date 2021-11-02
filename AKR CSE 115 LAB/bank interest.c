#include<stdio.h>
int main()
{
    int balance1,balance2,r,interest;
    printf("Enter the value of balance1: ");
    scanf("%d",&balance1);
    printf("Enter the value of interest rate: ");
    scanf("%d",&r);

    interest=balance1*(float)r/100;

    balance2=balance1+interest;

    printf("Balance2=%d",balance2);

    return 0;
}
