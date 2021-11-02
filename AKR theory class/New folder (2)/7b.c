int main()
{
    int x[5]={10,3,7,98,7};
    int *p;
    p=&x[2];
    printf("%d\n",p+2);
    printf("%d\n",p-2);
    printf("%d\n",*p+5);
    printf("%d\n",*(p-1));
    printf("%d",++(*p));
}

