main()
{
    int i,n,max,index=0;
    printf("How many students: ");
    scanf("%d",&n);

    int m[n];
    for(i=0; i<n; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&m[i]);
    }
    max=m[0];


    for(i=0; i<n; i++)
    {
        if(max<m[i])
        {
             max=m[i];
             index=i;

        }

    }
    printf("Maximum number %d found at %d ",max,index);

    return 0;
}
