main()
{
    int i,n,count=0;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    printf("%d factors ",count);
}
