main()
{   int a,b,c,t,x;
    printf("Enter a: ");
    scanf("%d",&a);
     printf("Enter b: ");
    scanf("%d",&b);
     printf("Enter c: ");
    scanf("%d",&c);

   /* t=b;
    b=a;
    a=c;
    c=t;
    */
    t=a;
    x=b;
    a=c;
    b=t;
    c=x;
    printf("a=%d,b=%d,c=%d",a,b,c);




}
