#include<stdio.h>
int main()
{
    int N,M,i,j,sum=0;
    printf("Enter row and column size: ");
    scanf("%d%d",&N,&M);
    int a[N][M];
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int n,t;
    printf("Enter the row no which u want to sum: ");
    scanf("%d",&n);
    t=n-1;
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            sum=sum+a[t][j];
        }
        printf("%d ",sum);
        break;
    }
}
