int main()
{
    int N,*p;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(p=a; p<a+N; p++)
    {
        scanf("%d",p);
    }
    printf("After reverse the array\n");
    for(p=a+N-1; p>=a; p--)
    {
        printf("%d ",*p);
    }
}

