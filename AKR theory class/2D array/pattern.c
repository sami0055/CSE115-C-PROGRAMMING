#include<stdio.h>
int main()
{
    int n,m,i,j,k,t;
    printf("Enter row,col: ");
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
            for(k=0; k<m; k++)
            {
                t=a[i][k];
                a[i][k]=a[j][k];
                a[j][k]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d",a[i][j]);

        }
        printf("\n");
    }
}
