main()
{
    int i,N,t;
    printf("How many numbers??");
    scanf("%d",&N);
    int a[N];
    for(i=0; i<N; i++)
    {
        printf("Enter numbers: ");
        scanf("%d",&a[i]);
    }
    t=a[N-1];
    for(i=N-1; i>0; i--)
    {
        a[i]=a[i-1];
    }

    a[0]=t;
    for(i=0; i<N; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
