#include<stdio.h>
int main()
{
    int row,col,i,j,isupper=1;
    printf("Enter the row and col:\n");
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
            if(j<i && a[i][j]!=0)
                isupper=0;
        }
    }
    if(isupper==1)
    {
        printf("Matrix is upper triangular matrix:\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Not a upper triangular matrix");
}
