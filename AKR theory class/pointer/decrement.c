int main()
{
    int a[]={1,2,3,4,5,6};
    int *p=&a[2];
    printf("%d ",*(--p));
    printf("%d",*(p--));
}
