#include<stdio.h>
int main()
{
    int x,y,m;
    scanf("%d",&x);
    m=1<<31;
    y=x&m;
    if(y==0)
        printf("Positive");
    else
        printf("Negative");


}
