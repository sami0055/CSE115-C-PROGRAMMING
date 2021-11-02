main()
{
    int a,b,c,sum;

    printf("Enter the value of a,b,c:  ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    switch(a)
    {
    case 0:
        printf("not valid");
 break;

    }
    switch(b)
    {
    case 0:
        printf("Not valid");
break;

    }


    switch(c)
    {
    case 0:
        printf("Not valid");
        break;

    }



    switch(sum)
    {
    case 180:
        printf(" Yes Valid");
        break;

    default:
        printf("Not valid");
        break;
    }



}
