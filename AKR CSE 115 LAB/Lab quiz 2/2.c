main()
{
    int i,n;
    float sum=0.0,t;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    sum=t=1;
    for(i=2; i<=n; i++)
    {
        if(i%2==0)
        {
            t=-i*i;

        }
        else
        {
            t=i*i;
        }
        sum=sum+1/t;

    }
    printf("sum is %f",sum);
}
