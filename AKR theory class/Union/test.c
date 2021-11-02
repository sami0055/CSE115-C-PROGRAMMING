#include<stdio.h>
typedef union
{
    int x,y;

}test;
int main()
{
    test t;
    t.x=10;
    printf("%d\n",t.x);
    printf("%d\n",t.y);
    t.y=100;
    printf("%d\n",t.x);
    printf("%d",t.y);
}
