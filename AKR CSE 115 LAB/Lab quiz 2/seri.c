main()
{
    int i,n;
    float x,sum,t,r;
    scanf("%d%f",&n,&x);

    t=sum=1.0;
    for(i=1; i<=n; i++)
    {

        r=x/i;

        t=r*t;
        sum=sum+t;

    }
    printf("%f",sum);
}
