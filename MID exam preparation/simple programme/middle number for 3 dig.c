main()
{
    int n,first,mid,last,rest;
    printf("Enter a 3 digit number");
    scanf("%d",&n);
    first=n/100;
    rest=n%100;
    mid=rest/10;
    last=rest%10;
    printf("Mid %d",mid);
}
