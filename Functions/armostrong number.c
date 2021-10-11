#include<stdio.h>
int armostrongNum(int n);
int main()
{
    int x,r;
    printf("Enter a number \n");
    scanf("%d",&x);
    r=armostrongNum(x);
    if(x==r)
    {
          printf("%d Armostrong number ",x);
    }
    else
        printf("%d not armostrong number",x);

}
int armostrongNum(int n)
{
    int temp,r,sum=0;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    return sum;
}
