int main()
{
   int i,n,sum1=0,sum2=0;
   printf("Enter n; ");
   scanf("%d",&n);
   int a[n];
   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0; i<n/2; i++)
   {
       sum1=sum1+a[i];
   }
   for(i=n/2; i<n; i++)
   {
       sum2=sum2+a[i];
   }
   if(sum1==sum2)
   {
       printf("YES");
   }
   else
    printf("NO");
}
