main()
{
    int i,N,value,idx=-1;
    printf("How many numbers??");
    scanf("%d",&N);
    int a[N];

    for(i=0; i<N; i++)
    {
        printf("Enter numbers: ");
        scanf("%d",&a[i]);
    }

    printf("What to search??");
    scanf("%d",&value);

    for(i=0; i<N; i++)
    {
        if(a[i]==value)
        {
            idx=i;
             printf("found at %d\n",idx);
        }
        else if(a[i]>value)
            break;

    }
    if(idx==-1)
        printf("Not found");


}
