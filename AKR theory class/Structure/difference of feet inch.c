#include<stdio.h>
typedef struct
{
    int f;
    int i;
}height;
int main()
{
 height p1,p2,r;
 int d;
 printf("Enter height of first person: \n");
 printf("Feet: ");
 scanf("%d",&p1.f);
 printf("Inch: ");
 scanf("%d",&p1.i);
 printf("Enter height for second person: \n");
 printf("Feet: ");
 scanf("%d",&p2.f);
 printf("Inch: ");
 scanf("%d",&p2.i);
 d=(p1.f*12+p1.i)-(p2.f*12+p2.i);
 if(d<0)
    d=d*(-1);
 r.f=d/12;
 r.i=d%12;
 printf("Difference is %d feet %d inch",r.f,r.i);
}
