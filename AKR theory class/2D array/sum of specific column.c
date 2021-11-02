#include<stdio.h>
int main()
{
    int i,j,col,row,n,sum=0;
    printf("Enter the row and col: ");
    scanf("%d%d",&row,&col);
    int a[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Which column u want to sum: ");
    scanf("%d",&n);
     j=n-1;
    for(i=0; i<n; i++)
    {
        sum=sum+a[i][j];
    }
    printf("SUM is %d ",sum);
}
