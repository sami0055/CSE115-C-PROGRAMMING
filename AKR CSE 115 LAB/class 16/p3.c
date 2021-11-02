#include<stdio.h>
typedef struct{

 int x;
 int y;

} point;
int main()
{
    int distance;
    point p,q;
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    scanf("%d",&q.x);
    scanf("%d",&q.y);
    distance=calDist(p,q);
    printf("%d",distance);

}
void calDist(point p,point q)
{
    int dx,dy,d;
    dx=p.x-p.y;
    dy=q.x-q.y;
    d=dx*dx+dy*dy;
    d=sqrt(d);
    return d;
}
