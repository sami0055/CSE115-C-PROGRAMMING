main()
{
    int temp,n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        printf("%d",r);
        temp=temp/10;
    }
    return 0;
}
