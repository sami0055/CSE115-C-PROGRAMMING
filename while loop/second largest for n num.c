main()
{
    int x,y,secL,largest;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        secL=y;
        largest=x;
    }
    else
    {
        secL=x;
        largest=y;
    }
    while(1)
    {
          scanf("%d",&x);
          if(x==0)
            break;
    if(x>largest)
    {
        secL=largest;
        largest=x;
    }
    else if (x>secL)
        secL=x;

    }
 printf("Largest : %d second largest: %d",largest,secL);





}
