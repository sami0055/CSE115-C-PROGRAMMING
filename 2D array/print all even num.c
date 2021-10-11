#include<stdio.h>
int main()
{
    int n,m,i,j,even=0;
    printf("Enter row and col: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]%2==0)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
}
