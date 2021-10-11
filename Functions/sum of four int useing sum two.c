#include<stdio.h>
sum(int x,int y);
main()
{
    int x,y,a,b,r,r1,r2;
    printf("print the value of x,y,a,b");
    scanf("%d%d%d%d",&x,&y,&a,&b);
    r=sum(x,y);
    r1=sum(r,a);
    r2=sum(r1,b);
    printf("Sum is %d ",r2);
}
int sum(int x,int y)
{
    int r;
    r=x+y;
    return r;
}
