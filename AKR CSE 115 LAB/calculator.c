
#include<stdio.h>
int main()
{
    char ch;
    int a,b;

    printf("Enter an operator:");
    scanf("%c",&ch);
    printf("Enter 1st operand: ");
    scanf("%d",&a);
    printf("Enter 2nd operand: ");
    scanf("%d",&b);
    switch(ch)
    {
    case '+':
        printf("The result is %d",a+b);
        case '-':
        printf("The result is %d",a-b);
        case '*':
        printf("The result is %d",a*b);
        case '/':
        printf("The result is %d",a/b);


    }

    return 0;

}
