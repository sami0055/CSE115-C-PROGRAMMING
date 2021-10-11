int max(int a,int b)
{
    int r;
    if(a>b)
        r=a;
    else
        r=b;

    return r;
}


main()
{
    int x,y,p,z,p2;
    printf("Enter the value of x and y ,z");
    scanf("%d%d%d",&x,&y,&z);
    p=max(x,y);
    p2=max(p,z);
    printf("Max is %d",p2);

}
