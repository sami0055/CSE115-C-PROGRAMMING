main()
{
    float x,t,r,sum;
    int i,n;
    printf("Enter the value of x:\n");
    scanf("%f%d",&x,&n);

    x=22.0*x/(7*180);
    sum=t=x;

    for(i=1; i<=n; i++)
    {
        r=-x*x/2*i*(2*i+1);
        t=r*t;
        sum=sum+t;

    }

    printf("sum id %.2f",sum);

}
