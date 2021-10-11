#include<stdio.h>
typedef struct
{
    char name[100];
    float b;
}bankaccount;
int main()
{
    bankaccount p1,p2;
    printf("Enter information for first person: \n");
    printf("Enter name: ");
    gets(p1.name);
    printf("Enter balance: ");
    scanf("%f%*c",&p1.b);
    printf("Enter information for second person: \n");
    printf("Enter name: ");
    gets(p2.name);
    printf("Enter balance: ");
    scanf("%f",&p2.b);
    if(p1.b>p2.b)
        printf("%s is reacher",p1.name);
    else if (p2.b>p1.b)
        printf("%s is reacher ",p2.name);
    else
        printf("Equally reach");
}
