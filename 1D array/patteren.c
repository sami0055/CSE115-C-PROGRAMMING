main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
