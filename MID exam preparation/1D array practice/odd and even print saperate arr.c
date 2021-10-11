main()
{
    int i,j=0,n,k=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n],b[n],x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }

        else
        {
             x[k]=a[i];
            k++;

        }
    }
    for(i=0; i<j; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0; i<k; i++)
    {
        printf("%d ",x[i]);
    }

}
