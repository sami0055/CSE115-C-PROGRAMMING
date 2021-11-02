main()
{
    int n,sum=0,temp,r;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

    }
    if(n%sum==0)
        printf("%d is Harshad Number",n);
        else
            printf("%d is not a Harshad Number",n);
    return 0;
}
