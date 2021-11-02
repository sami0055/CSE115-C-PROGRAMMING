main()
{
    int n,i,sum=0,t;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {


        if(n%i==0 && i%2==1)
        {
            sum=sum+i;
        }
    }

    printf("%d",sum);
}
