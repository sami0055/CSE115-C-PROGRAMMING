#include<stdio.h>
int checkprimenumber(int n);
main()
{
    int n1,n2,i,flag=0;
    printf("Enter two positive intiger: \n");
    scanf("%d%d",&n1,&n2);
    printf("Print prime number between %d and %d ",n1,n2);
    for(i=n1; i<=n2; i++)
    {
        flag=checkprimenumber(i);
        if(flag==1)
        printf("%d ",i);
    }
    }
    int checkprimenumber(int n)
    {
        int i,flag=1;
        for(i=2; i<=n/2; ++i)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        return flag;
    }



