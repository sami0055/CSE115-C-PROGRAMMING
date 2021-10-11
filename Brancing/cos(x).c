main()
{
    float x,r,sum=0,t;
    int i;
    printf("Enter the value of x");
    scanf("%f",&x);

    sum=t=1;
    x=22.0*x/(7*180);
    for(i=1; i<=100; i++)
    {
        r=-x*x/(2*i*(2*i-1));
        t=r*t;
        sum=sum+t;
    }
    printf("%f",sum);



}
