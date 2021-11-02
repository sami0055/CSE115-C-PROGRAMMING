#include<stdio.h>
int main()
{
    int x,y,m;
   scanf("%d",&x);
   printf("Position?");
   scanf("%d",&m);

    y=setBit(x,m);
     printf("%d",y);
}
int setBit(int x,int p)
{
    int m,y;
    m=1<<p;
    y=x|m;
    return y;

}
