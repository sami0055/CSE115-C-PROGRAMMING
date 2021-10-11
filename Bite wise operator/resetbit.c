#include<stdio.h>
int main()
{
    int x,y,p;
    printf("Enter digit and position: ");
    scanf("%d%d",&x,&p);
    y=resetBit(x,p);
    printf("%d",y);
}
int resetBit(int x,int p)
{
    int m,y;
    m=1<<p;
    m=~m;
    y=x&m;
    return y;
}
