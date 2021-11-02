main()
{
    int N,sum=0,count=1;
    printf("Enter N: ");
    scanf("%d",&N);

    while(count<=N)
    {
        sum=sum+count;
        count++;
    }
    printf("Sum is %d",sum);
}
