main()
{
    int i,n,sum=0;
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
        sum=sum+a[i];
    }
    printf("Sum of array is %d ",sum);
return 0;


    }
