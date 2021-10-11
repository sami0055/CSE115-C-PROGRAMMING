main()
{
    int i,fact=1,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
}
