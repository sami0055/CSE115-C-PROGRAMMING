main()
{
    int i,t,sum=0,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        t=i;
        sum=sum+t;
    }
    printf("sum is %d",sum);

}
