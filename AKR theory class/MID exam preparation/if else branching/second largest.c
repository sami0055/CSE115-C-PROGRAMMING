main()
{
    int x,y,secl,largest;
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        largest=x;
        secl=y;
    }
    else
    {
        largest=y;
        secl=x;
    }

    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;

        if(x>largest)
        {
            secl=largest;
            largest=x;
        }
       else if(x>secl)
       {
           secl=x;
       }

    }
    printf("%d second largest",secl);
}
