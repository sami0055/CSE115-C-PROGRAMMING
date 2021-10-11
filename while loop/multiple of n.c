main()
{
    int n;
    scanf("%d",&n);

    int count=n-n%5;
    while(count>=5)
{
    printf("%d ",count);
    count=count-5;

}
return 0;
}
