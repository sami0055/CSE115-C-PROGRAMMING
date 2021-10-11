#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row and col : ");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col];
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
            b[j][i]=a[i][j];
        }
    }
    printf("The matrix: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d ",b[i][j]);
            printf("\n");
    }
}
