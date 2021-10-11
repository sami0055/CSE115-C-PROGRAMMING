main()
{
    int i,t,sum=0,n;
     scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            t=-i*i*i;
        }
        else
            t=i*i*i;

        sum=sum+t;
    }
    printf("Sum is %d",sum);
}
