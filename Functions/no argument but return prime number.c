#include<stdio.h>
getintiger();
int main()
{
    int n,i,flag=0;
    n=getintiger();
    for(i=2; i<=n/2; ++i)
    {  if(n%i==0)
    {
        flag=1;
        break;
    }
    }
    if(flag==0)
        printf("%d Prime number",n);
    else
        printf("%d Not prime number",n);
}

int getintiger()
{
    int n;
    printf("Enter a positive intiger");
    scanf("%d",&n);
    return n;
}
