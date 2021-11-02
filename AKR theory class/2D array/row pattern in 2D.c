#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the row and column: \n");
    scanf("%d%d",&row,&col);
    int mat[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            mat[i][j]=i;
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}
