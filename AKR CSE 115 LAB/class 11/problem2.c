int gcdOFxy(int a,int b)
{
    int min,gcd,i;
    min=a<b?a:b;
    for(i=min; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}
main()
{
    int x,y,z,r,g2;
    printf("Enter the value of x y and z: ");
    scanf("%d%d%d",&x,&y,&z);
    r=gcdOFxy(x,y);
    g2=gcdOFxy(r,z);
    printf("GCD of x ,y and z %d",g2);
}
