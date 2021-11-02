#include<stdio.h>
void callme(int n)
{
    if(n==0)
        return;

     printf("%d",n);
      callme(n-1);
      printf("%d",n);
}


void main()
{
    callme(2);


}
