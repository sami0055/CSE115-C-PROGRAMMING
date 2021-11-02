#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    int A[N][N];
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
            if(i>j)
            A[i][j]=-1;
        else if(j>i)
            A[i][j]=1;
        else
             A[i][j]=0;

    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
