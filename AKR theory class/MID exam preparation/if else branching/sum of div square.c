main()
{
    float t,n,sum;
    int i;
    printf("Enter the value of n; ");
    scanf("%f",&n);

    sum=0;
    for(i=1; i<=n; i++)
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
