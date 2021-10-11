main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
              printf("%d ",i);
              break;
        }
    }
}
