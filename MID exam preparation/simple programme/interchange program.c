main()
{
    int t,x,y;
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);

    t=x;
    x=y;
    y=t;
    printf("x=%d and y=%d",x,y);
}
