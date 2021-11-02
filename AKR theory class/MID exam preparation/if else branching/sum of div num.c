main()
{
    float i,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%f",&n);

    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);
    }
    printf("sum is %.2f",sum);

}
