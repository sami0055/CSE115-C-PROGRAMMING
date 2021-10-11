main()
{
    int n,temp,r,sum=0,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
      temp=i;
      sum=0;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }

    if(sum==i)
        printf("%d ",i);
 }



}
