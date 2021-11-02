#include<stdio.h>
int r=0;
int reverse(int num);
int main()
{
    int rev,num;
    printf("Enter an integer: \n");
    scanf("%d",&num);
    rev=reverse(num);
    printf("Reverse of %d is %d ",num,rev);
    return 0;

}
int reverse(int num)
{
    if(num==0)
        return 0;

      r=r*10+(num%10);

     reverse(num/10);
     return (r);

}
