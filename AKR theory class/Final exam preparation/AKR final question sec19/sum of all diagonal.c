#include<stdio.h>
int main()
{
    int N,i,j,sum=0;
    printf("Enter the size of array in even: ");
    scanf("%d",&N);
    while(N%2==1)
    {
    printf("Enter the size of array in even: ");
    scanf("%d",&N);
    }
    int a[N][N];
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==j)
            sum=sum+a[i][j];
            else if(i+j==N-1)
                sum=sum+a[i][j];
        }
    }
    printf("Sum is %d",sum);

}
