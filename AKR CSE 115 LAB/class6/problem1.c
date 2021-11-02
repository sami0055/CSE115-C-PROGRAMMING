main()
{
    int N,i=1;
    printf("Enter the value of N: ");
    scanf("%d",&N);

     i= N;
    while(i>=1)
    {
       if(i%13==0)
       {
           printf("%d ",i);
       }
       i--;
    }

    return 0;

}
