main()
{
    int i,n,j,c;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
           printf("%d ",i);
        }

    }
    return 0;
}
