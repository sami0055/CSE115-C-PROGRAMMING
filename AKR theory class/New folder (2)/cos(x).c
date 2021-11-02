#include<stdio.h>
int main()
{
    int i;
    float x,s,t,r;
    printf("Enter the value of  x: ");
    scanf("%f",&x);
    x=22.0*x/(7*180);
    s=t=1;
    for(i=1; i<=100; i++)
    {
        r=-x*x/(2*i*(2*i-1));
        t=r*t;
        s=s+t;
    }
    printf("%f",s);
}
