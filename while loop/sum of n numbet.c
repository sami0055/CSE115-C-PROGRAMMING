main()
{
    int n,i,sum=0;
    printf("Enter N: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }

    printf("sum is %d",sum);
}
