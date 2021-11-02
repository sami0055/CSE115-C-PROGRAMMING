main()
{
    int i,temp,r,sum=0,n;
    printf("Enter number");
    scanf("%d",&n);
   temp=n;
   while(temp!=0)
   {
       r=temp%10;
       sum=sum*10+r;
       temp=temp/10;
   }

   printf("Reverse is %d",sum);
}
