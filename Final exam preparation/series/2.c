#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float sum=0.0,t,r;
    int x,n;
    printf("Enter the value pf n, and x: ");
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i=i+2)
    {
        t=pow(x,i);
        sum=sum+(t)/(i);

    }
    printf("Sum is %f",sum);
}
