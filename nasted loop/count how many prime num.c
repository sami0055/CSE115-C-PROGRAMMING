main()
{
    int i,n,c,count=0,x;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    for(n=1; n<=x; n++)
    {
        c=0;
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
                c++;

        }
        if(c==2)
        {
            printf("%d ",n);
            count++;
        }

    }
    printf("\n Number of prime number: %d",count);
}
