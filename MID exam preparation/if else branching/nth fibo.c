main()
{
    int i,n,first=0,second=1,fibo;
    printf("Enter the value of n for nth fibo: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        first=second;
        second=fibo;
        fibo=first+second;
        while(i==n)
        {
            printf("%d",fibo);
            break;
        }
    }
}
