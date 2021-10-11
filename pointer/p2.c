main()
{
    int x=5;
    int *p;
    p=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",p);
    printf("%d\n",*p);// print refer value
    printf("%d",&p);
}
