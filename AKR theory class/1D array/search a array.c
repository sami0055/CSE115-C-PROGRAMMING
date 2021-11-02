main()
{
    int i,n,flag=0,pos,value;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the a value which u want to search: ");
    scanf("%d",&value);

    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            pos=i+1;
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("\nNumber found at %d position ",pos);
    }
    else
        printf("Number not found");

    return 0;
}
