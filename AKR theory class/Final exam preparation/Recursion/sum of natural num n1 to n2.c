#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter first num: ");
    scanf("%d",&n1);
    printf("Enter limit: ");
    scanf("%d",&n2);
    int sum=Sumofnatural(n1,n2);
    printf("Sum is %d ",sum);
}
int Sumofnatural(int n1,int n2)
{
     int sum=0;
     if(n1==n2)
        return n1;
    else
        sum=n1+Sumofnatural(n1+1,n2);

   return sum;

}
