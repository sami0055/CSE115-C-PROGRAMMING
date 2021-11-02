int main()
{
    int n;
    printf("Enter the size of  array: ");
    scanf("%d",&n);
    int a[n];
    uniqueItems(a,n);
}

void uniqueItems(int x[],int n)
{
    int dup[10];
    int i,j,c;
    printf("Input array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        dup[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(x[i]==x[j])
            {
                c++;
                dup[j]=0;
            }
        }
        if(dup[i] !=0)
        {
            dup[i]=c;
        }
    }

    printf("Unique elements:");
    for(i=0; i<n; i++)
    {
        if(dup[i]!=0)
       printf(" %d",x[i]);

    }

}
