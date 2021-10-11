#include<stdio.h>
int main()
{
    int n,ex;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter exponent: ");
    scanf("%d",&ex);
    int r=power(n,ex);
    printf("%d",r);

}
int power(int n,int ex)
{
    if(ex==0)
        return 1;
    else
        return n*power(n,ex-1);
}
