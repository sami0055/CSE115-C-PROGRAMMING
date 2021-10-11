main()
{
    int x,y,mini,second_mini;
    scanf("%d%d",&x,&y);


         if(x<y)
    {
        mini=x;
        second_mini=y;
    }

    else
    {
        mini=y;
        second_mini=x;

    }


    while(1)
    {
         scanf("%d",&x);
        if(x==0)
        break;

        if(x<mini)
        {
             second_mini=mini;
        mini=x;
        }
        else if(x<second_mini)
            second_mini=x;





    }
    printf(" mini: %d",mini);


    }







