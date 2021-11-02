

    main()
{
    int initial_balance,balance_1,balance_2,annul_fee;
    float rate;

    printf("Enter initial balance: ");
    scanf("%d",&initial_balance);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
   printf("Enter annul fee: ");
   scanf("%d",&annul_fee);

    rate=rate/100;
    balance_1=initial_balance*rate+initial_balance-annul_fee;
    balance_2=balance_1*rate+balance_1-(2*annul_fee);

      printf("Balance after one year: %d\n",balance_1);
      printf("Balance after two years : %d\n",balance_2);






}
