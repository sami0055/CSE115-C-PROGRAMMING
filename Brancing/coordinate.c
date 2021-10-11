main()
{
    int x,y;
    printf("Enter the value of coordinate value ");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
        printf("The coordinate (%d,%d) lies in first coordinate",x,y);
    else if(x<0 && y>0)
    {
        printf("The coordinate (%d,%d) lies in second coordinate",x,y);
    }
    else if(x<0 && y<0)
        printf("The coordinate(%d,%d) lies in third coordinate",x,y);
    else if(x>0 && y<0)
        printf("The coordinate (%d,%d) lies in fourth coordinate",x,y);
    else
        printf("The coordinate in in  origin");
}
