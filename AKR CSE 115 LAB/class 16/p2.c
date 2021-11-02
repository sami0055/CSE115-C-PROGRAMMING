#include<stdio.h>
typedef struct {
    int h;
    int m;
} Time;
int main()
{
    Time F,S;
    int minute,h,m;
    printf("Enter the time of first city hour and min\n");
    scanf("%d%d",&F.h,&F.m);
    printf("Enter the time of second city's hour and min:\n");
    scanf("%d%d",&S.h,&S.m);
    minute=(F.h*60+F.m)-(S.h*60+S.m);
    h=minute/60;
    m=minute%60;
    printf("%d hours %d minute",h,m);
}
