main()
{
    int i,n,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            count++;
        }

    }
    printf("Number of negative is %d",count);
}
