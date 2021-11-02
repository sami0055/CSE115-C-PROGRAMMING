main()
{
int i,n,sum;
printf("How many numbers??");
scanf("%d",&n);
int a[n];

a[0]=0;
a[1]=1;
sum=a[0]+a[1];
for(i=2; i<n; i++)
{
    a[i]=a[i-1]+a[i-2];
   sum=sum+a[i];
}

   printf("SUM is %d\n",sum);

 for(i=0; i<n; i++)
 {
   printf("%d ",a[i]);


}

return 0;
}
