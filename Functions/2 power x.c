#include<stdio.h>
int powerOftwo(int n);
int main()
{
    int x,r;
    printf("print power of 2\n");
    scanf("%d",&x);
    r=powerOftwo(x);
    printf("2 power %d is %d ",x,r);

}
int powerOftwo(int n)
{
    int i,t=1;
    for(i=1; i<=n; i++)
    {
        t=2*t;
    }
    return t;
}
