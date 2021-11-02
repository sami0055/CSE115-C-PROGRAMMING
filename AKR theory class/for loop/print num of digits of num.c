main()
{
    int n,c=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
}
