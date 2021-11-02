main()
{
    int i,n,max1,secl;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max1=a[0];
    secl=a[1];
    for(i=0; i<n; i++)
    {
        if(a[i]>max1)
        {
            secl=max1;
            max1=a[i];
        }
        else if(a[i]>secl && a[i]<max1)
            secl=a[i];
    }
    printf("Second largest: %d ",secl);
}
