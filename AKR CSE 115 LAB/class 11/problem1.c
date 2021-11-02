int powerOfTWO(int n)
{
    int i,t=1;
    for(i=1; i<=n; i++)
    {
        t=2*t;
    }
    return t;
}
main(){
    int x,r;
    scanf("%d",&x);
    r=powerOfTWO(x);
    printf("%d",r);
    }
