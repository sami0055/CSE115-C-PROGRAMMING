
main()
{
    int x,y,z,s,max;
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        max=x;
        s=y;
    }
    else
    {
        max=y;
        s=x;
    }

    if(z>max)
    {
        s=max;
        max=z;
    }
    else
    {
        if(z>s)
        s=z;
    }

    printf("max %d and second largest %d",max,s);

    return 0;
}



