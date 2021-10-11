#include<stdio.h>
int main()
{
    int n,fact;
    printf("Which num?:\n");
    scanf("%d",&n);
    factf(n,&fact);
    printf("Factorial %d ",fact);

}
void factf(int n,int *f)
{
    int i;
    *f=1;
    for(i=1; i<=n; i++)
    {
        *f=*f*i;
    }
}
