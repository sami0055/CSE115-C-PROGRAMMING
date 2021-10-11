main()
{
    int i,n,gcd,min,a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    min=(a<b)?a:b;
    if(a==0||b==0)
        gcd=a+b;

    else
    {
        for(i=1; i<=min; i++)
        {
             if(a%i==0 && b%i==0)
            gcd=i;
        }

    }
    printf("GCD: %d",gcd);
}
