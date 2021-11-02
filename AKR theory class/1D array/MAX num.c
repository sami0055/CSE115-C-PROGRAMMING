main()
{
    int N,i,max;
    printf("How many numbers??");
    scanf("%d",&N);
    int num[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];

    for(i=1; i<N; i++)
    {
        if(max<num[i])
        {
             max=num[i];

        }

    }
    printf("Max is %d",max);
}
