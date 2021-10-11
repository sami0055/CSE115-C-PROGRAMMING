#include<stdio.h>
int main()
{
    int x,y,m;
    scanf("%d",&x);
    m=1;
    y=x&m;
    if(y==0)
        printf("Even");
    else
        printf("Odd");
}
