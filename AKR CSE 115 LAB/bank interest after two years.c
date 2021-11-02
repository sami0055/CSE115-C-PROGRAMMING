#include<stdio.h>
int main()
{
    float balance1,balance2,r,interest,year,balance3,interest2;

    printf("Enter the value of balance1: ");
    scanf("%f",&balance1);

    printf("Enter the value of interest rate: ");
    scanf("%f",&r);

    printf("Enter the value of year: ");
    scanf("%f",&year);

    interest=(balance1*(r/100));


    balance2=balance1+interest;

    printf("Balance2=%.2f",balance2);




    return 0;
}

