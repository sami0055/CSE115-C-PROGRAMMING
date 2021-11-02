main()
{
    int i,n,pos;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the position for delete: ");
    scanf("%d",&pos);

    if(pos<0 || pos>n)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        n--;

        printf("\n Elements of array after delete: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t",a[i]);
        }
    }

    return 0;
}
