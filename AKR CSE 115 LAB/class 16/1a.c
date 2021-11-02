#include<stdio.h>
typedef struct{

 int x;
 int y;

} point;
int main()
{
    int dx,dy;
    point p,q;
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    scanf("%d",&q.x);
    scanf("%d",&q.y);
    dx=p.x-p.y;
    dy=q.x-q.y;
    if(dx<0)
        dx=dx*(-1);
    if(dy<0)
        dy=dy*(-1);
   int sum=dx+dy;
    printf("%d",sum);

}
