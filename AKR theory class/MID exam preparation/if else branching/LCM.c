main()
{
    int max,i,a,b,lcm;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
             lcm=max;
        break;
        }
        max++;

    }
    printf("LCM is %d",lcm);

}
