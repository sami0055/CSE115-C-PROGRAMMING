main()
{
    int i,n,first=0,second=1,fibo;
    printf("Enter n for nth fibonacci: ");
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
