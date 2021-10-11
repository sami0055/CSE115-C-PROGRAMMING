#include<stdio.h>
int main()
{
    int unit;
    float bill,payable_bill;
    printf("Enter unit :");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=50*0.60;
    }
    else if(unit<=150)
    {
        bill=50*0.60+100*1.20;
    }
    else if(unit>150)
    {
        bill=50*0.60+100*1.20+(unit-150)*1.50;
    }
    payable_bill=bill+bill*.15;

    printf("Bill is %.3f ",payable_bill);
}
