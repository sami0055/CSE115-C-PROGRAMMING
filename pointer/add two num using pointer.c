#include<stdio.h>
int main()
{
    int x=10,y=20,sum;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    sum=*p1+*p2;
    printf("sum is %d ",sum);

}
