main()
{
    int n1,n2,i,count=0,Lar,small;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    if(n1>n2)
    {
        Lar=n1;
        small=n2;

    }
    else
    {
        Lar=n2;
        small=n1;
    }
    for(i=small; i<=Lar; i++)
    {
        if(i%3==0 && i%5!=0)
        {
            count++;
        }
    }
    printf("%d Numbers",count);
    return 0;
}
