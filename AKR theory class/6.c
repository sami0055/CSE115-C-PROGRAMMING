#include <stdio.h>
#include <math.h>
int main (){
 float  a,b,c;

float d,i,m,n;

printf("Enter cofficient:\n a:\n b:\n c:\n");

scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
    m=(-b+sqrt(d))/(2*a);
    n=(-b-sqrt(d))/(2*a);
    printf("Root 1 :%.2f\n",m);
    printf("Root 2 :%.2f",n);
}
else if (d==0)
{
    m=n=-b/(2*a);

     printf("Root 1 :%.2f\n",m);
    printf("Root 2 :%.2f",n);

}
else
{
    m=n=-b/(2*a);

    i=sqrt(-d)/(2*a);
   printf("Root 1 :%.1f+%.2fi\n",m,i);
    printf("Root 2 :%.1f+%.2fi",n,i);
}
    return 0;
}
