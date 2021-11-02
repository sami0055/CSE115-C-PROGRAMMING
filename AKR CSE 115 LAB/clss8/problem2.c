#include<stdio.h>
int main()
{
    int fibo,first=0,second=1,i,n,sum;


    printf("Enter the value of N: ");
    scanf("%d",&n);
   sum=first+second;
    for(i=0; i<=n; i++)
    {
        if(i<=1)
        {
            fibo=i;
        }
        else
        {

            fibo=first+second;
            first=second;
            second=fibo;

            sum=sum+fibo;
        }

        printf("%d ",fibo);

    }
   printf("\n sum of fibo is %d",sum);
}
