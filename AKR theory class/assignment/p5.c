#include<stdio.h>
int perfactnum(int N);
int main()
{
    int N,r;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    r=perfactnum(N);
    if(r==1)
        printf("YES");
    else
        printf("NO");
}
int perfactnum(int N)
{
    int i,sum=0,r;
    for(i=1; i<N; i++)
    {
        if(N%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==N)
        r=1;
    else
        r=0;
    return r;

}
