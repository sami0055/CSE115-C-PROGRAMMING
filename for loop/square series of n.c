main()
{
    int n,i,t,sum;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            t=-i*i;
        else
            t=i*i;
        sum=sum+t;
    }
    printf("Sum is %d",sum);

    return 0;
}
