main()
{
    int i,j,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1||i==n||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
