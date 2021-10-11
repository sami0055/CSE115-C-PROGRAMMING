#include<stdio.h>
int main()
{
    int i,j,col,row,sum=0;
    printf("Enter the row and col size : ");
    scanf("%d%d",&row,&col);
    int a[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(j>i)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of upper triangular matrix is %d ",sum);
}
