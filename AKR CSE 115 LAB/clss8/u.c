main()
{
    int first,second,fibo,n,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    first=1;
    second=1;

    for(i=3; i<=n; i++)
    {
        if(n<=2)
        {
            fibo=first;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
    }
}
