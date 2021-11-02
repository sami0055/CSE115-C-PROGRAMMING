#include<stdio.h>
int main()
{
    int n,m,i,j,row,sum=0;
    printf("Enter row and col : ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Which row u want to find sum: ");
    scanf("%d",&row);
    i=row-1;
    for(j=0; j<m; j++)
    {
        sum=sum+a[i][j];
    }
    printf("Sum of %d no row is %d ",row,sum);
}
