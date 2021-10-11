main()
{
    float ibalance,b1,b2,bn,rate;
    int N;

    printf("Enter initial balance : ");
    scanf("%f",&ibalance);

    printf("Enter interest rate: ");
    scanf("%f",&rate);

    rate=rate/100;

    b1=ibalance+ibalance*rate;
    b2=b1+b1*rate;
    printf("How many years?");
    scanf("%d",&N);

    bn=ibalance*pow(1+rate,N);

    printf("After one years %f\n",b1);
    printf("After two years %f\n",b2);
    printf("After n years %f\n",bn);

}
