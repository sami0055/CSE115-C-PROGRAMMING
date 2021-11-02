main()
{
    int N,i,min;
    printf("How many numbers??");
    scanf("%d",&N);
    int num[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(i=1; i<N; i++)
    {
        if(num[i]<min)
        {
            min=num[i];

        }
    }
    printf("Min is %d",min);
}
