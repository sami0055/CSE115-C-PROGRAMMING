main()
{
    int n,i;
    float sum=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum=sum+(float)1/(i*i);
    }
    printf("Sum is %f",sum);
}
