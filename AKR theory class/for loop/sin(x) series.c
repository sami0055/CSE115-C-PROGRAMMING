int main()
{
    int n,i;
    float x,t,r,s=0;
    scanf("%f %d",&x,&n);

    x=22.0*x/(7*180);
    s=t=x;
    for(i=1; i<=n; i++)
    {
        r=-x*x/(2*i*(2*i+1));
        t=r*t;
        s=s+t;
    }

    printf("%f",s);
    return 0;
}
