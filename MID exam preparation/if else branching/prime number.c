main()
{
    int i,count,n,x,j;

    printf("Enter the value of n: ");
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
    {
         if(i%j==0)
        {
            count++;
        }
    }
       if(count==2)
        printf("%d ",i);
    }

}
