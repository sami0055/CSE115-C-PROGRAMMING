main()
{
    int N,i;
    printf("Enter the size of array");
    scanf("%d",&N);
    int a[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<N; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }

    }
    return 0;
}
