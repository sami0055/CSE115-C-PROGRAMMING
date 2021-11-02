#include<stdio.h>
int main()
{
    int x,m;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    int bits=sizeof(int)*8;
    m=1<<31;
    if(x&m)
        printf("MSB of %d set 1",x);
    else
        printf("MSB of %d unset 0",x);
}
