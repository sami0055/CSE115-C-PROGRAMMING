#include<stdio.h>
int main()
{
    int i,j,N,temp;
    printf("Enter the size of array:\n");
    scanf("%d",&N);
    int a[N][N];
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int t=N;
    for(i=0; i<N; i++)
    {
    for(j=0; j<N; j++)
    {
         if(i==j)
        {
            temp=a[i][j];
            a[i][j]=a[i][t-1];
            a[i][t-1]=temp;

        }
    }
        t--;
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
