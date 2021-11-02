void callme(int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    callme(n-1);

}
void main()
{
    int n;
    scanf("%d",&n);
    callme(n);
}
