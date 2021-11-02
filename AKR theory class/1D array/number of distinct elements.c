main()
{
    int i,j,n,c;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter array elements: \n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }

    c=n;
    for(i=0; i<n-1; i++)
    {

            if(a[i]==a[i+1])
            c--;
    }
    printf("Number of distinct elements %d",c);

}
