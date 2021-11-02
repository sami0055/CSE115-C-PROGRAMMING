main()
{
    int a, b, n1, n2, i, count=0;
    printf("Enter n1: ");
    scanf("%d",&a);
    printf("Enter n2: ");
    scanf("%d",&b);
    if (a<b)
    {
        n1=b;
        n2=a;
    }
    else
    {
        n1=a;
        n2=b;
    }
    for (i=n2; i<=n1; i++)
    {
        if (i%3==0 && i%5!=0)
        {
            count++;
        }

    }
     printf("%d number", count);
}
