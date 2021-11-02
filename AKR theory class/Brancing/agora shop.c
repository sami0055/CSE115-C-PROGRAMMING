#include<stdio.h>
int main()
{
    float amount,d;
    printf("Enter your amount: ");
    scanf("%f",&amount);
    if(amount<=5000)
        d=amount*0.05;
    else if(amount<=10000)
        d=5000*.05+(amount-5000)*0.1;
    else
        d=5000*0.05+5000*0.1+(amount-10000)*0.2;


    amount=amount-d;
    printf("Discount %.2f and payable amount %.2f",d,amount);

}
