main()
{
    int N,k,sum=0,j;

    printf("Enter the value of N: ");
    scanf("%d",&N);

    while(sum!=1 && sum!=4)

    {
        sum=0;
        while(N!=0)
        {
            j=N%10;
            sum=sum+j*j;
            N=N/10;
        }
        N=sum;
    }
    if(sum==1)
    {
        printf("Happy number ");
    }

    else
        printf("Not happy number");


}
