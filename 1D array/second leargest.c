main()
{
    int i,n,max1,max2;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    max1=a[0];
    max2=a[1];

    for(i=2; i<n; i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }

    printf("First largest =%d\n",max1);
    printf("Second largest=%d\n",max2);
    return 0;


}
