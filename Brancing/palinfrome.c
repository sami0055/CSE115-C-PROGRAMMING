main()
{
    int n,temp,r,sum,j,rev=0,t,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);

   while(temp!=rev)
   {


        temp=n;
        while(temp!=0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }

        i=rev;
        sum=n+i;
        n=sum;
   }

printf("%d",temp);

   }







