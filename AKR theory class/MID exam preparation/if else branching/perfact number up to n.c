main()
{
    int i,n,j;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        int sum=0;
        for(j=1; j<i; j++)
        {

            if(i%j==0)
            {
                sum=sum+j;
            }

        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
