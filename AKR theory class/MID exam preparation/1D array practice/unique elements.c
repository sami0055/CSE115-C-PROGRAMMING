main()
{
    int i,n,f=0,j;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {    f=0;
         for(j=i+1; j<n; j++)
         {

                  if(a[i]==a[j])
                   ++f;
         }

           if(f==0)
        {
            printf("%d ",a[i]);
        }
    }


}
