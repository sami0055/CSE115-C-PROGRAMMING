main()
{

    int hours;
    float wages;
    printf("Enter How many Hours?: ");
    scanf("%d",&hours);

    if(hours<=40)
    {
        wages=hours*10; //here wages per hour 10$

    }

    else
        wages=40*10+(hours-40)*15; //here 150% per hour for over time
    printf("Weekly Wages is %.2f",wages);
}
