main()
{
    int i,n,first=0,second=1,fibo;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        first=second;

        second=fibo;
        fibo=first+second;

         printf("%d ",fibo);

    }




    return 0;
}
