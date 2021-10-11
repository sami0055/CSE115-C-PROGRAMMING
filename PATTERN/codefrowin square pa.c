main()
{
    int i,j,n,count;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
        {
            printf("%d",++count);
            count=0;
        }
        printf("\n");
    }
}
