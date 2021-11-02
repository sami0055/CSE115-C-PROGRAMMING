main()
{

    int a,b,sum,sub,multiplication,modulus;
    printf("Enter an integer : ");
    scanf("%d",&a);
    printf("Enter another integer:");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    multiplication=a*b;
    modulus=a%b;
    printf("%d PLUS %d EQUALS %d\n",a,b,sum);
    printf("%d-%d=%d\n",a,b,sub);
    printf("The result of multiplication is %d\n",multiplication);
    printf("%d mod %d=%d\n",a,b,modulus);



}
