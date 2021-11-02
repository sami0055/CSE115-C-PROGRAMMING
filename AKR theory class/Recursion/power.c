int power(int a,int b)
{
    int r;
    if(b==0)
        r=1;
    else
        r=a*power(a,b-1);
    return r;

}
void main()
{
    int a,b,x;
    printf("Enter a power b\n");
    scanf("%d%d",&a,&b);
    x=power(a,b);
    printf("Result is %d",x);
}
