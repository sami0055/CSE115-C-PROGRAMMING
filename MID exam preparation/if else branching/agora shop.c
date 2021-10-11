main()
{
    float amount,discount;
    printf("Enter amount");
    scanf("%f",&amount);
    if(amount<=5000)
    {
        discount=amount*0.05;
    }
    else if(amount<=10000)
    {
        discount=5000*0.05+(amount-5000)*0.1;
    }
    else
        discount=5000*0.05+5000*0.1+(amount-10000)*0.2;

    printf("Purchase amount %.2f",amount-discount);
}
