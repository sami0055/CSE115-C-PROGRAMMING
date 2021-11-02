main()
{
    int n,i,first,second,fibo=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    first=0;
    second=1;
    int sum=0;
    for(i=0; i<n; i++)
    {
        if(i<1)
        {
            fibo=i;
        }

       else{

        first=second;
         second=fibo;
          fibo=first+second;

         sum=sum+fibo;

       }


        printf("%d ",fibo);
    }
    printf("\nsum is %d",sum);
}
