int main()
{
    int a=70,b=20;
    int *p,*q;
    p=&b;
    q=&a;
    a=b+*p;
    printf("%d\n",a);
    q=p;
    printf("%d\n",p);
    a=(*p)*(*q);
    printf("%d\n",a);
    *p=a%b;
    printf("%d\n",*p);
    *q=a/b;
    printf("%d",*q);

}
