
main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
