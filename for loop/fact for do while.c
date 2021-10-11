main()
{
    int i,n,fact=1;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    i=1;
    do
    {
        fact=fact*i;
        i++;

    }
    while(i<=n);
    printf("Factorial is %d",fact);

    return 0;
}
