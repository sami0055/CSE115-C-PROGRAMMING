main()
{
    int h1,m1,h2,m2,d,h,m;
    printf("Dhaka: ");
    scanf("%d%d",&h1,&m1);
    printf("India: ");
    scanf("%d%d",&h2,&m2);

    d=(h1*60+m1)-(h2*60+m2);
    h=d/60;
    m=d%60;

    printf("time difference %d Hours %d minute",h,m);
}
