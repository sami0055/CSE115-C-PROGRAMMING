#include<stdio.h>
int main()
{
    int i,j,row,col,max;
    printf("Enter the value of row and column: \n");
    scanf("%d%d",&row,&col);
    int mat[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    max=mat[0][0];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(mat[i][j]>max)
                max=mat[i][j];
        }
    }
    printf("%d is max",max);
}
