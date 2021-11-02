main()
{
    int i,j,N,count=-1;
    printf("How many numbers: ");
    scanf("%d",&N);
    int a[N];
    for(i=0; i<N; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(a[i]>a[j])
              {
                count++;
                break;
              }
        }
}

 if(count==-1)
    {
        printf("Sorted");
    }

    else
        printf("Not shorted");
    }

