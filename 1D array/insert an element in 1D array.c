main()
{
    int i,n,pos,num;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the num which u want to insert: ");
    scanf("%d",&num);
    printf("Enter the value of position : ");
    scanf("%d",&pos);

    if(pos>n+1 || pos<=0)
    {
        printf("Invalid position!  ");
    }
    else
    {
        for(i=n; i>=pos; i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=num;
        n++;
        printf("Array elements after insertion: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t",a[i]);
        }

    }
}
