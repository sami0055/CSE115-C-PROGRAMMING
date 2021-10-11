main()
{
    int transaction_fee,transactions,amount,amount_pay;
    printf("Enter the number of transactions: ");

    scanf("%d",&transactions);

    if(transactions<=10)
    {
        transaction_fee=0;
    }
    else if(transactions<=20)
    {
        transaction_fee=10*0+(transactions-10)*5;
    }
    else if(transactions<=30)
    {
        transaction_fee=10*5+(transactions-20)*7.5;
    }
    else if(transactions<=40)
    {
        transaction_fee=10*5+10*7.5+(transactions-30)*10;
    }
    else
    {
        transaction_fee=10*5+10*7.5+10*10+(transactions-40)*12.50;
    }
    printf("%d",transaction_fee);
}
