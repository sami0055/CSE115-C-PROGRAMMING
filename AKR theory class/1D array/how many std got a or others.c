main()
{
    int i,N,m,j;
    int Ac,Bc,Cc,Dc,Fc;
    Ac=Bc=Cc=Dc=Fc=0;

    printf("Enter the value of N: ");
    scanf("%d",&N);
    int a[N],r[N];
    for(i=0; i<N; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&a[i]);
    }

    for(i=0; i<N; i++)
    {
        m=a[i];
        if(m>=90)
            Ac++;
        else if(m>=80)
        Bc++;
        else if(m>=70)
        Cc++;
        else if(m>=60)
            Dc++;
        else
            Fc++;



    }

     for(i=0; i<N: i++)
     {
         printf("")
     }
    printf("Got A %d\n",Ac);
    printf("Got B %d\n",Bc);
    printf("Got C %d\n",Cc);
    printf("Got D %d\n",Dc);
    printf("Got F %d",Fc);

    return 0;
}
