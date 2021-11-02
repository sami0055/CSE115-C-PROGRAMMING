main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("Max is %d",num1);
    if(num2>num1 && num2>num3)
        printf("max is %d ",num2);

    if(num3>num1 && num3>num2)
        printf("Max is %d",num3);

    else
        printf("Numbers are Equal");

    return 0;
}
