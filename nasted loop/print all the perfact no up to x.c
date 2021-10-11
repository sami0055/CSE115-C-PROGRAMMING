main()
{
    int i,n,sum,x,count=0;
    printf("Enter the value of N: ");
    scanf("%d",&x);
    for(n=1; n<=x; n++)
    {
         sum=0;
    for(i=1; i<n; i++)
    {

        if(n%i==0)
        {
            sum=sum+i;
        }
    }
     if(sum==n)
     {
          printf("%d ",n);
          count++;
     }

    }
    printf("\ntotal %d",count);
}
