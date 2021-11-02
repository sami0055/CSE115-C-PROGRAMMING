main()
{
    int max,a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
             printf("LCM %d",max);
             break;
        }
        max++;
    }

    return 0;
}
