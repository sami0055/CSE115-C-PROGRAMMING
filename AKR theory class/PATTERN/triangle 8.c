main()
{
    int i,j,n,count=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",++count);
        }
        printf("\n");
    }
}
