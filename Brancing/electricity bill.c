main()
{
    int unit;
    float amount,surch,total_amount;
    printf("Enter the unit: ");
    scanf("%d",&unit);
    if(unit<=50)
    amount=unit*0.5;
    else if(unit<=150)
        amount=25+(unit-50)*0.75;
    else if(unit<=250)
        amount=100+(unit-150)*1.20;
    else
        amount=220+(unit-250)*1.5;

    surch=amount*0.20;
    total_amount=amount+surch;

    printf("Electricity Bill = Rs. %.2f",total_amount);
    return 0;


}
