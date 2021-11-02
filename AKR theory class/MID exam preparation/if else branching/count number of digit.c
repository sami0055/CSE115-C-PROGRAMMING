main()
{
    int n,temp,count=0,r;
    printf("Enter digit");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        count++;
        temp=temp/10;
    }
    printf("Number of digit %d ",count);
}
