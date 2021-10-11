#include<stdio.h>
int main(){
 float a,b,c,d,e,avg;
 printf("enter 5 numbers:\n");
 scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
 avg=(a+b+c+d+e)/5;
 printf("Average is = %.2f",avg);

return 0;
}
