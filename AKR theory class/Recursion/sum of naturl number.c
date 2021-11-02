int sum(int n)
{
    int r;
    if(n==1)
        r=1;
    else
        r=n+sum(n-1);
    return r;

}
void main()
{
    int n,x;
    scanf("%d",&n);
   x=sum(n);
   printf("sum is %d",x);
}
