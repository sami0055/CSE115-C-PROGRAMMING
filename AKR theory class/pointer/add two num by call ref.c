#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the fist value:\n");
    scanf("%d",&a);
    printf("Enter the second value :\n");
    scanf("%d",&b);
    int sum=call(&a,&b);
    printf("Sum is %d",sum);
}
int call(int *p,int *q)
{
    int sum=*p+*q;
    return sum;

}
