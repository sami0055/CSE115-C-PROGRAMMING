main()
{
    char ch;
    int a,b;

    printf("Enter your desired operator:+,-,*,/");
    scanf("%c",&ch);
    printf("Enter 1st operand:");
    scanf("%d",&a);
    printf("Enter 2nd operator: ");
    scanf("%d",&b);


    switch(ch)
    {
    case '+':
        printf("Result is: %d",a+b);
        break;

    case '-':
        printf("Result is : %d",a-b);
        break;

    case '*':
        printf("Result is: %d ",a*b);
        break;
    case '/':
        printf("Result is : %d",a/b);
        break;

    default:
        printf("Not a valid input");

    }
}
