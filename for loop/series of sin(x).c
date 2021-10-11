main()
{
    float t,s=0,x,r;
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%f",&x);
    s=t=x;
    x=22.0*x/(7*180);
    for(i=1; i<=n; i++)
    {
        r=-x*x/(2*i*(2*i+1));
        t=r*t;
        s=s+t;
    }
    printf("sum is %f",s);
}
