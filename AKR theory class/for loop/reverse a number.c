main()
{
    int i,n,sum=0,temp,r;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }

    printf("Reverse Number is %d ",sum);
}
