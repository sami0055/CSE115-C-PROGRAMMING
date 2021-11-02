main()
{
    int i,n,c=0,j=0,temp,r,s=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
             c++;
        }
       if(c==2)

       {
           temp=n;
           while(temp!=0)
           {
               r=temp%10;
               s=s*10+r;
               temp=temp/10;
           }
               for(i=1; i<=s; i++)
               {
                   if(s%i==0)
                    j++;
               }
               if(j==2)
               {
                    printf("Super prime %d",n);

               }
               else
            printf("Not super prime");
       }
    }
}
