main()
{
    int i,j,N,count;
    printf("Enter array size: ");
    scanf("%d",&N);
    int a[N],fr[N];

    for(i=0; i<N; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        fr[i]=-1;
    }
    for(i=0; i<N; i++)
    {
        count=1;
        for(j=i+1; j<N; j++)
            if(a[i]==a[j])
        {
            count++;
            fr[j]=0;


        }
        if(fr[i]!=0)
        {
            fr[i]=count;
        }
    }
   printf("%d",fr[i]);
}
