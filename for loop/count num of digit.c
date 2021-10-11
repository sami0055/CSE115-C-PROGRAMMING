main()
{
    int n,temp,c=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        c++;
    }
    printf("%d",c);
}
