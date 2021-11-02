#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N][N],b[N][N];
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
            b[i][j]=a[j][i];
        }
    }

     int flag=1;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Given matrix is symmetric matrix: \n");
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix is not symmetric ");
}
