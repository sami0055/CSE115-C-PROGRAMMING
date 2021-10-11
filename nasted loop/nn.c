main()
{

    int n,d,r,temp;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value which u want to insert");
    scanf("%d",&d);

    temp=n;
    while(temp!=0)
    {
        r=temp%10;

        temp=temp/10;
    }
      if(temp==0)
        {
            printf("%d%d",d,n);
        }

}
