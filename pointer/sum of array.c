int main()
{
    int a[]={1,3,4,5,6};
    int sum=0,*p,i;
    for(p=&a[0]; p<=&a[4]; p++)
    {
        sum=sum+*p;
    }
   printf("%d ",sum);
}
