#include<stdio.h>
int main()
{
    float initial_balance,balance_1,balance_2,balance_n,rate;
    int N;
    printf("Enter initial balance: ");
    scanf("%f",&initial_balance);
    printf("Enter interest rate: ");
    scanf("%f",&rate);

    rate=rate/100;
    balance_1=initial_balance*rate+initial_balance;
    balance_2=balance_1*rate+balance_1;
    printf("Enter How many Years: ");
    scanf("%d",&N);
    balance_n=initial_balance*pow(1+rate,N);
    printf("After one year %f After two year: %f After %d yerar %f",balance_1,balance_2,N,balance_n);

    return 0;
}
