#include<stdio.h>
int main()
{
    int i,j,N,sum=0;
    printf("Enter row and column: ");
    scanf("%d",&N);
    int a[N][N];
    printf("Enter the elements of matrix: ");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum of diagonal is %d",sum);
}
