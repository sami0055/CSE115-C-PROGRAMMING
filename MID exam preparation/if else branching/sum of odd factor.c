main()
{
    int i,n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0 && i%2==1)
            sum=sum+i;
    }
    printf("sum is %d",sum);
}
