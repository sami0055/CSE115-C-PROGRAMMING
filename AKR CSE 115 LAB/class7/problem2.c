
main()
{
    int i,n,sum=0,t;
    printf("Enter the value of N: ");
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            t=-(i*i*i);
        else
            t=i*i*i;

             sum=sum+t;
    }

     printf("The sum is %d",sum);
    return 0;

    }
