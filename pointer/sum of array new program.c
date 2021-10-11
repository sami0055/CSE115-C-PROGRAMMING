int main()
{
    int a[]={1,2,3,4,5,6};
    int sum=0,*p;
    for(p=a; p<a+6; p++)
    {
        sum=sum+*p;
    }
    printf("%d ",sum);
}

