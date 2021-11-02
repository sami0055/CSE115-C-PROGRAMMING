main()
{

    float n,i=1,sum=0;


    printf("Enter the value of n: ");
    scanf("%f",&n);

    while(i<=n)
    {
        sum=sum+(1/i);
        i++;

    }
    printf("%.2f",sum);
}
