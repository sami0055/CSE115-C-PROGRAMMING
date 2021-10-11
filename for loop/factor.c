main()
{
    int i,n,count=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }

    }

}
