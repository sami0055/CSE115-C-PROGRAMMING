main()
{
    int i,t,n,pro=1,x;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        t=x;
        pro=pro*t;
    }
    printf("%d",pro);
}
