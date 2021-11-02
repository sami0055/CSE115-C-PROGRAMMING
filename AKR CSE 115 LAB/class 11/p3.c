int perfectNumber(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2; i<=n; i++)
    {
        if(perfectNumber(i)==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
