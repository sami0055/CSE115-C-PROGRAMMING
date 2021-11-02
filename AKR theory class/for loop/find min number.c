main()
{
    int i,n,min,mid,last,first,rest;
    printf("Enter a 3 digit number: ");
    scanf("%d",&n);
    first=n/100;
    rest=n%100;
    last=rest%10;
    mid=rest/10;

    if(first<mid && first<last)
    {
       min=first;
    }
    else if(mid<first && mid<last)
    {
        min=mid;
    }
    else
    {
        min=last;
    }

    printf("Min is %d",min);

    return 0;


}
