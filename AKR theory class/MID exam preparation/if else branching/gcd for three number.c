main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,j;
    for(i=1,j=1; i<=a,j<=b; i++,j++)
    {
        if(a%i==0 && b%j==0 && j==i)
        {
            printf("%d ",i);
        }
    }
}
