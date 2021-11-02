void callme(int n)
{
    if(n==0)
        return;
    callme(n-1);
    printf("%d ",n);

}
void main()
{
    int n;
    scanf("%d",&n);
    callme(n);
}
