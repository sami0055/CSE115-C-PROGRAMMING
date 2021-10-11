main()
{
    int i,n,c=0,x;
    printf("Enter a Numbers: ");
    scanf("%d",&x);

    for(n=1; n<=x; n++)
    {
        if(x%n==0)
        {
            c=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
          c++;
    }
    if(c==2)
    printf("%d ",n);
    }
}

}
