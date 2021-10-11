#include<stdio.h>
int main()
{
    int x,y,z,max;
    printf("Enter three number : ");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        max=x;
    }
    else
        max=y;
    if(z>max)
        max=z;
    printf("Max is %d ",max);
}
