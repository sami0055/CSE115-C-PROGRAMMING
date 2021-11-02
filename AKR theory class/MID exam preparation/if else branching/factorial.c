main()
{
    int n,fact=1;
    printf("Enter a number for factorial");
    scanf("%d",&n);

    while(n>=1)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial is %d",fact);
}
