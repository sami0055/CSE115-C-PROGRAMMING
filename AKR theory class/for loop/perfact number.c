#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
            s=s+i;


       }
       if(s==n)
        printf("Perfect number");
    else
        printf("Not a Perfect number");

    }

