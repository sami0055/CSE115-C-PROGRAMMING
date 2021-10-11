main()
{
    int i,N,t;
    printf("How many numbers??");
    scanf("%d",&N);
    int a[N];

    for(i=0; i<N; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&a[i]);
    }
    t=a[0];

    for(i=0; i<N-1; i++)
    {
        a[i]=a[i+1];
    }
    a[N-1]=t;

    printf("After left rotation :\n");

    for(i=0; i<N; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
