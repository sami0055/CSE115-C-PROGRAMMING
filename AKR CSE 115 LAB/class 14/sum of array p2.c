#include<stdio.h>
int main()
{
    int M,N,i,j;
    printf("Enter the number of rows: \n");
    scanf("%d",&M);
    printf("Enter the number of column: \n");
    scanf("%d",&N);
    int a[M][N],b[M][N],X[M][N];

    printf("Enter first matrix: ");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix: ");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("First matrix: \n");

    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second matrix: \n");

    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            X[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum:\n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",X[i][j]);
        }
        printf("\n");
    }

}
