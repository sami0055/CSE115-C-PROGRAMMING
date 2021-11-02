#include<stdio.h>
int main()
{
    int x,m,y,n;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the position which u want to change");
    scanf("%d",&n);
    m=(1<<n)|x;
    printf("Before %d bit %d in decimal\n",n,x);
    printf("After setting %d bit %d in decimal",n,m);

}
