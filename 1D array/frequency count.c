main()
{
    int i,n,flag=0,value;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Enter a value to find frequency: ");
    scanf("%d",&value);

    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            flag++;
        }
    }
    printf("Frequency of %d is %d",value,flag);
}
