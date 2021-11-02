main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        if(i%13==0)
        {
            printf("%d ",i);
        }
    }
}
