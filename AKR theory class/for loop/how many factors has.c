main()
{
    int i,n,c=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }
    printf("%d",c);
}
