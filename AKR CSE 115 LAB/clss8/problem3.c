main()
{
    int a,b,max;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    do
    {
        if(max%a==0 && max%b==0)

        {
            printf("%d and %d lcm =%d ",a,b,max);
            break;
        }
    max++;
    }
    while(1);


}
