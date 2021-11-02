main()
{
    int a,b,c,lcm,max;
    printf("Enter the value of a,b,and c");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?a>c?a:c:(b>c?b:c);
    while(1)
    {
        if(max%a==0 && max%b==0 && max%c==0)
        {
             lcm=max;
             break;
        }
        max++;


    }
    printf("LCM is %d",lcm);
}
