#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    int *p1,*p2;

    p1=&x;
    p2=&y;
    //swaping
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("x=%d and y=%d",x,y);
}
