#include<stdio.h>
int main()
{
  float sum=0,t;
  int i,n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  sum;
  i=1;
  while(i<=n)
  {

      sum=sum+1/pow(i,i);
      i=i+2;
  }
  printf("sum is %f",sum);

}
