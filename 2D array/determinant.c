#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row and col :");
    scanf("%d%d",&row,&col);
    int a[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

}
