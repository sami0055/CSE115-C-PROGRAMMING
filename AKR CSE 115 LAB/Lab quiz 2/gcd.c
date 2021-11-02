main()
{
    int a,b,c,gcd,min,i;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        min=a;
    }
    else if(b<a && b<c)
    {
        min=b;
    }
    else
    {
        min=c;
    }
    for(i=2; i<=min; i++)
    {
        if(a%i==0 && b%i==0 && c%i==0)
            break;
    }
    printf("GCD is %d",i);
}
