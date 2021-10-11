main()
{
    int i,n,sum=0,pro=1;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            pro=pro*a[i];
        }
    }

    printf("Sum of Even is  %d",sum);
    printf("\n Product of odd is %d",pro);
}
