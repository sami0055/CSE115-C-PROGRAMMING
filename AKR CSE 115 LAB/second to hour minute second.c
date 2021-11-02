#include<stdio.h>
int main()
{
    int s=0,m=0,h=0;
    printf("Please enter the number of second: ");
    scanf("%d",&s);//3663second

    h=s/3600; //3663/3600=1
    s=s%3600; //3663%3600=63 second
    m=s/60; //63/60=1 minute
    s=s%60; //63/%60=3 second
    printf("%d Hour %d minute %d second",h,m,s);


}
