#include<stdio.h>
void checkprimenumber();
int main()
{
  checkprimenumber();
  return 0;
}
void checkprimenumber()
{
    int i,n,flag=0;
    printf("Enter a integer number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            flag++;

    }
    if(flag==2)
        printf("%d prime number ",n);
    else
        printf("%d not prime number",n);
}
