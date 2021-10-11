#include<stdio.h>
int main()
{
    int a,b,c,max,min,s;
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    c=(c>max)?c:max;
    max=c;
    //s=a+b+c-max-min;
    s=a*b*c/(max*min);
    printf("Max %d\n",max);
    printf("Min %d\n\a",min);
    printf("Second largest: %d",s);
}
