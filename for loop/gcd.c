main()
{
    int i,a,b,min,gcd;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    if(a==0 || b==0)
        gcd=a+b;
    else
    {
        min=(a<b)? a:b;
        for(i=1; i<=min; i++)
        {
            if(a%i==0 && b%i==0)
                gcd=i;
        }
    }
    printf("GCD:%d",gcd);
}
