main()
{
    int x,y,count=0,temp1,temp2,r,i,sum;
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);
    temp1=x;
    temp2=y;
    while(temp1!=0 && temp2!=0)
    {
        r=temp1%10;
        temp1=temp1/10;
        i=temp2%10;
        temp2=temp2/10;

        sum=r+i;
        if(sum>=10)
            ++count;
    }
    printf("%d carry operation",count);
}
