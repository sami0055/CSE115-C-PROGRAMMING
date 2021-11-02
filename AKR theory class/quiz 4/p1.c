#include<stdio.h>
int main()
{
   int x[]={10,20,12,9,87};
   int *p=&x[3];
   int *q=&x[1];
   int d=p-q;
   printf("%d",d);
   p--;
   printf("")
   *p=*q;
   q++;
   d=p-q;
   printf("%d",d);
}
