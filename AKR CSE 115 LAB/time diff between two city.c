#include<stdio.h>
int main()
{
    int h1,m2,h2,m1,d,h,m,s,s1,s2;
    printf("Enter First city's time: ");
    scanf("%d%d%d",&h1,&m1,&s1);

    printf("Enter Second city's time: ");
    scanf("%d%d%d",&h2,&m2,&s2);

    d=(h1*60+m1*60+s1)-(h2*60+m2*60+s2);
    h=d/3600;
    m=(d-h*3600)/60;
    s=d-h*3600-m*60;

    printf("%d Hours %d minute %d second ",h,m,s);

    return 0;

}
