main()
{
    int n,i,r,s=0;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
}
