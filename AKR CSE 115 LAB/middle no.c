
main()
{
    int num,first,middle,last,rest,min;
    printf("Enter a 3 digit no: ");
    scanf("%d",&num);
    first=num/100;
    rest=num%100;
    middle=rest/10;
    last=rest%10;
    if((first<middle) && (first<last))
    {
        min=first;
    }
    else if ((middle<first) && (middle<last))
    {
        min=middle;

    }
    else
    {
        min=last;
    }
    printf("min %d",min);
}
