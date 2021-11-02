main()
{
    int a,b,c,sum;
    printf("Enter the value of all the andgle: ");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    if(a>0&& b>0&& c>0&& sum==180)
        printf("Yes valid");
    else
        printf("Not valid");

    return 0;
}
