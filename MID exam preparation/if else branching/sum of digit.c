main()
{
    int n,temp,sum=0,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("SUM is %d",sum);
}
