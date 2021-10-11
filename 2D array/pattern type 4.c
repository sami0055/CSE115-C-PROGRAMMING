#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the value of row and col: \n");
    scanf("%d%d",&row,&col);

    int mat[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
               mat[i][j]=0;
            else if(j>i)
                mat[i][j]=1;
            else if(i>j)
            mat[i][j]=-1;

        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
}
