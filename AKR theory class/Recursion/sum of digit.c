#include<stdio.h>
int r=0;
int sumofdigit(int num);
int main()
{
    int r,num;
    printf("Enter an integer: \n");
    scanf("%d",&num);
    r=sumofdigit(num);
    printf("sum of digit %d ",r);
    return 0;

}
int sumofdigit(int num)
{
    if(num==0)
        return 0;

      r=r+(num%10);

     sumofdigit(num/10);
     return (r);

}

