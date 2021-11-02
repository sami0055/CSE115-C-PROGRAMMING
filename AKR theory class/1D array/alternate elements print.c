main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            printf("%d ",a[i]);

        }
    }
}
