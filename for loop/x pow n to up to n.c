main()
{
    int i,x,n,t,p=1;
    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);
    for(i=1; i<=n; i++)
    {
        t=x;
        p=p*t;
    }
    printf("%d",p);
}
