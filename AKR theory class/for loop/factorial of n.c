main()
{
    int i,n,fact=1,t,j;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    {
        for(j=1; j<=i; j++)
        t=j;
        fact=fact*j;
        printf("%d\n",fact);


    }

}
