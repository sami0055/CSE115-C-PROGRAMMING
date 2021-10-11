main()
{
    int i,j,n;
    printf("Enter the valu of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");


    }
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}



