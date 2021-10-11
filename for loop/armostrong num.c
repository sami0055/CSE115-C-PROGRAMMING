main()
{
    int n,temp,sum=0,r;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {

   r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;

    }


    if(sum==n)
    {
        printf("%d Strong number",n);
    }

}
