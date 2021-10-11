#include<stdio.h>
int main()
{
    int i,j,col,row,sum=0;
    printf("Enter the size of row and column:  ");
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
            if(i>j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of lower triangular is %d ",sum);
}
