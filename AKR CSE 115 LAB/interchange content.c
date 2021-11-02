#include<stdio.h>
int main()
{
    int x=10,y=5,t;
    t=x;
    x=y;
    y=t;

    printf("%d %d",x,y);

}
