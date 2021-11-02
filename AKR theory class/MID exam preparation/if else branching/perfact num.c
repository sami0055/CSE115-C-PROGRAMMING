//sum of all factor should equal to nnumber

main()
{
    int i,n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d perfect number",n);

    }

}
