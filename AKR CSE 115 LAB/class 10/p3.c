int main()
{

    int n,i,j,c,x;

    printf("Input size of array:");
    scanf("%d",&n);
    int a[n],d[n];
    printf("Enter the value of n:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        d[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                d[j]=0;
            }
        }
        if(d[i] !=0)
        {
            d[i]=c;
        }
    }
    for(i=0; i<n; i++)
    {
        if(d[i]>1)
          x=d[i];

    }
     printf(" There are %d duplicate",x);

}
