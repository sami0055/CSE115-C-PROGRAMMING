main()
{
    int odd=0,even=0,n,i;
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
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even is %d and odd is %d ",even,odd);
    return 0;



}
