#include<stdio.h>
int main()
{
    int i,j,N;
    printf("Enter the size of row and col:\n");
    scanf("%d",&N);
    int a[N][N],sum=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<N; i++)
    {   sum=0;
        for(j=0; j<N; j++)
        {
            sum=sum+a[i][j];
        }
        printf("Row %d sum = %d\n",i+1,sum);
    }
    for(i=0; i<N; i++)
    {
        sum=0;
        for(j=0; j<N; j++)
        {
            sum=sum+a[j][i];
        }
        printf("Col %d sum= %d\n",j+1,sum);
    }

}
