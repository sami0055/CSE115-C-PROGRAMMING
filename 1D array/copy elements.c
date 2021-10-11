main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n],b[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
     for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    printf("Print a\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


printf("\n Copy elements are: ");
    //print copy elements
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
}
