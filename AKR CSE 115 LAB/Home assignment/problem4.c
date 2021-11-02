#include<stdio.h>
int main()
{
    int m1,c1,m2,c2,diff,m,c;
    printf("Enter the value of m1 and c1: ");
    scanf("%d%d",&m1,&c1);
    printf("Enter the value of m2 and c2: ");
    scanf("%d%d",&m2,&c2);

    diff=(m1*100+c1)-(m2*100+c2);
    m=diff/100;
    c=diff%100;
    printf("%d meter and %d centimeter",m,c);

}
