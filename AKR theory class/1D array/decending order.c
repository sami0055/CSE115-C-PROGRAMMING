main()
{
    int i,n,j,t;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; i++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}