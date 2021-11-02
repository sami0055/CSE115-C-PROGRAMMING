main()
{
    int n,i,sum=0,t,r=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

    t=0;
    sum=0;
        if(n%i==0 && i%2==1)
        {
            r=r+i;
            sum=sum+i;
            t=sum;
             printf("+%d",t);

        }

        }
        printf("=%d",r);
    }





