#include<stdio.h>
int main()
{
    int x,y,m;
    printf("Enter the value of x");
    scanf("%d",&x);
    m=1;
    y=x&m;
    if(y==1)
        printf("LSB of %d is set 1",x);
        else
            printf("LSB of %d is set 0",x);
        return 0;
}
