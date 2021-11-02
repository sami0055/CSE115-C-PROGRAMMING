main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("Year is leap year");
    }
    else
        printf("Not leap year");
}
