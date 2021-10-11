main()
{
    int i,n,t;
    float sum=0.0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
             t=-i*i*i;
        }

        else
        {
             t=i*i*i;
        }

        sum=sum+1.0/t;
    }
    printf("Sum is %f ",sum);
    return 0;
}
