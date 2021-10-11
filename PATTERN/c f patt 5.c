main()
{
    int i,j,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%3==0 && j%3==0)
                printf("0");
                else
                printf("1");
        }
        printf("\n");
    }


}
