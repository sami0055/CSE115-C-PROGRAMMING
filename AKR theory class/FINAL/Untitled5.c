#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the row and col size");
    scanf("%d",&N);
    int a[N][N];
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i>j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}
