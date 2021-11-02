main()
{
int n,s=0,temp,r;
printf("Enter the value of n: ");
scanf("%d",&n);
temp=n;

while(temp!=0)
{
    r=temp%10;
    s=s+r;
    temp=temp/10;
}

printf("%d",s);


}
